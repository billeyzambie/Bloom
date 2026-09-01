#pragma once

#include <new>
#include <string.h>
#include "../Sexy.TodLib/TodDebug.h"
#include "../Sexy.TodLib/TodCommon.h"
#include "../Lawn/System/SaveGame.h"

#include "Bloom.h"
#include "NamespacedString.h"
#include "Registry.h"
#include "BoundedSync.h"

//#include "../Lawn/Projectile/Projectile.h"

template <typename T> class BLOOM_API BloomDataArray
{
  public:
	enum
	{
		DATA_ARRAY_INDEX_MASK = 65535,
		DATA_ARRAY_KEY_MASK = -65536,
		DATA_ARRAY_KEY_SHIFT = 16,
		DATA_ARRAY_MAX_SIZE = 65536,
		DATA_ARRAY_KEY_FIRST = 1
	};

	static_assert(
		std::is_final_v<T> 
			? T::Type::INSTANCE_MAX_SIZE == sizeof(T) 
			: T::Type::INSTANCE_MAX_SIZE >= sizeof(T) + 12
	);

	class BLOOM_API DataArrayItem
	{
	  public:
		alignas(T) char mBuffer[T::Type::INSTANCE_MAX_SIZE];
		unsigned int mID;
		T &Item()
		{
			return reinterpret_cast<T &>(mBuffer);
		}
		void Sync(SaveGameContext &theContext)
		{
			theContext.SyncUint(mID);
			if (mID & DATA_ARRAY_KEY_MASK)
			{

				if (theContext.mReading)
				{
					ResourceId aResId;
					theContext.SyncResourceId(aResId);
					const Registry<T::Type> &aRegistry = *Registry<T::Type>::gInstance;
					const T::Type *aType = aRegistry.GetByResourceId(aResId);
					if (aType)
					{
						aType->Instantiate(mBuffer);
					}
					else
					{
						aRegistry.GetDefaultType().Instantiate(mBuffer);
					}
				}
				else
				{
					theContext.SyncResourceId(const_cast<ResourceId &>(Item().mType.mResourceId));
				}

				BoundedSync aSync = {theContext};
				Item().Sync(aSync);
				aSync.Finish();
			}
		}
	};

  public:
	DataArrayItem *mBlock;
	unsigned int mMaxUsedCount;
	unsigned int mMaxSize;
	unsigned int mFreeListHead;
	unsigned int mSize;
	unsigned int mNextKey;
	const char *mName;

  public:
	BloomDataArray()
	{
		mBlock = nullptr;
		mMaxUsedCount = 0U;
		mMaxSize = 0U;
		mFreeListHead = 0U;
		mSize = 0U;
		mNextKey = 1U;
		mName = nullptr;
	}

	~BloomDataArray()
	{
		DataArrayDispose();
	}

	void DataArraySync(SaveGameContext &theContext)
	{
		theContext.SyncUint(mFreeListHead);
		theContext.SyncUint(mMaxUsedCount);
		theContext.SyncUint(mSize);
		for (size_t i = 0; i < mMaxUsedCount; i++)
			mBlock[i].Sync(theContext);
	}

	void DataArrayInitialize(unsigned int theMaxSize, const char *theName)
	{
		TOD_ASSERT(mBlock == nullptr);
		mBlock = (DataArrayItem *)operator new(sizeof(DataArrayItem) * theMaxSize);
		for (size_t i = 0; i < theMaxSize; i++)
			mBlock[i].mID = 0u;
		mMaxSize = theMaxSize;
		mNextKey = 1001U;
		mName = theName;
	}

	void DataArrayDispose()
	{
		if (mBlock != nullptr)
		{
			DataArrayFreeAll();
			operator delete(mBlock);
			mBlock = nullptr;
			mMaxUsedCount = 0U;
			mMaxSize = 0U;
			mFreeListHead = 0U;
			mSize = 0U;
			mName = nullptr;
		}
	}

	void DataArrayFree(T *theItem)
	{
		DataArrayItem *aItem = (DataArrayItem *)theItem;
		TOD_ASSERT(DataArrayGet(aItem->mID) == theItem, "Failed: DataArrayFree(0x%x) in %s", theItem, mName);
		theItem->~T();
		unsigned int anId = aItem->mID & DATA_ARRAY_INDEX_MASK;
		aItem->mID = mFreeListHead;
		mFreeListHead = anId;
		mSize--;
	}

	void DataArrayFreeAll()
	{
		T *aItem = nullptr;
		while (IterateNext(aItem))
			DataArrayFree(aItem);

		mFreeListHead = 0U;
		mMaxUsedCount = 0U;
	}

	inline unsigned int DataArrayGetID(T *theItem)
	{
		DataArrayItem *aItem = (DataArrayItem *)theItem;
		TOD_ASSERT(DataArrayGet(aItem->mID) == theItem, "Failed: DataArrayGetID(0x%x) for %s", theItem, mName);
		return aItem->mID;
	}

	bool IterateNext(T *&theItem)
	{
		DataArrayItem *aItem = (DataArrayItem *)theItem;
		if (aItem == nullptr)
			aItem = &mBlock[0];
		else
			aItem++;

		DataArrayItem *aLast = &mBlock[mMaxUsedCount];
		while (aItem < aLast)
		{
			if (aItem->mID & DATA_ARRAY_KEY_MASK)
			{
				theItem = (T *)aItem;
				return true;
			}
			aItem++;
		}
		return false;
	}

	T *DataArrayAlloc(const T::Type &theType)
	{
		TOD_ASSERT(mSize < mMaxSize, "Data array full: %s", mName);
		TOD_ASSERT(mFreeListHead <= mMaxUsedCount, "DataArrayAlloc error in %s", mName);
		unsigned int aNext = mMaxUsedCount;
		if (mFreeListHead == mMaxUsedCount)
		{
			mFreeListHead = ++mMaxUsedCount;
		}
		else
		{
			aNext = mFreeListHead;
			mFreeListHead = mBlock[mFreeListHead].mID;
		}

		DataArrayItem *aNewItem = &mBlock[aNext];
		memset(aNewItem, 0, sizeof(DataArrayItem));
		aNewItem->mID = (mNextKey++ << DATA_ARRAY_KEY_SHIFT) | aNext;
		if (mNextKey == DATA_ARRAY_MAX_SIZE)
			mNextKey = 1;
		mSize++;

		return theType.Instantiate(aNewItem);
	}

	T *DataArrayTryToGet(unsigned int theId)
	{
		if (!theId || (theId & DATA_ARRAY_INDEX_MASK) >= mMaxSize)
			return nullptr;

		DataArrayItem *aBlock = &mBlock[theId & DATA_ARRAY_INDEX_MASK];
		return aBlock->mID == theId ? &aBlock->Item() : nullptr;
	}

	T *DataArrayGet(unsigned int theId)
	{
		TOD_ASSERT(DataArrayTryToGet(theId) != nullptr, "Failed: DataArrayGet(0x%x) for %s", theId, mName);
		return &mBlock[(short)theId].Item();
	}
};