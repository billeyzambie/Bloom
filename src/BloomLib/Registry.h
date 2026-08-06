#pragma once

#include <vector>
#include <string>
#include <unordered_map>

#include "RegistryTypeHolder.h"
#include "NamespacedString.h"
#include "ChunkedList.h"
#include "Bloom.h"

//#include "../Lawn/StoreItem/StoreItemType.h"

class LawnApp;

class BLOOM_API IRegistry
{
  public:
	virtual void Freeze() = 0;
	virtual void Update(const LawnApp &theLawnApp) = 0;
};

template <class T> class BLOOM_API Registry : public IRegistry
{
	ChunkedList<RegistryTypeHolder<T>, 64> mHolders;
	std::vector<T *> mTypes;
	mutable std::unordered_map<std::string, const T *> mTypesByResourceId;
	int mNextId = 0;
	bool mFrozen = false;

  public:
	Registry() = default;
	Registry(const Registry &theCopied) = delete;
	Registry &operator=(const Registry &theCopied) = delete;
	
	const RegistryTypeHolder<T> &Register(T *(*theSupplier)())
	{
		TOD_ASSERT(!mFrozen, "Type registered too late");
		if (!mFrozen)
		{
			int anId = mNextId++;
			mHolders.EnsureIndex(anId);
			mHolders[anId] = {theSupplier};
			return mHolders[anId];
		}
		return mHolders[0];
	}
	const T *GetByResourceId(const ResourceId &theResourceId) const
	{
		return mTypesByResourceId[theResourceId.AsString()];
	}
	const T *GetByResourceId(const std::string &theResourceIdAsString) const
	{
		return mTypesByResourceId[theResourceIdAsString];
	}
	int GetNumOfTypes() const
	{
		return mNextId;
	}
	virtual void Freeze() override
	{
		if (mFrozen)
			return;

		for (int i = 0; i < mNextId; i++)
		{
			auto [aCurrent, anOriginal] = mHolders[i].Supply();

			aCurrent->mNumericalId = anOriginal->mNumericalId = i;

			mTypes.push_back(aCurrent);
			
			mTypesByResourceId[aCurrent->mResourceId.AsString()] = aCurrent;
		}

		mFrozen = true;
	}
	virtual void Update(const LawnApp &theLawnApp) override
	{
		for (T *aType : mTypes)
		{
			aType->Update(theLawnApp);
		}
	}
	const T *const *begin() const
	{
		return &mTypes[0];
	}
	const T *const *end() const
	{
		return &mTypes[mTypes.size() - 1] + 1;
	}
};