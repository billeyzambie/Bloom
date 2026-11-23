#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <memory>
#include <type_traits>

#include "RegistryTypeHolder.h"
#include "BloomType.h"
#include "NamespacedString.h"
#include "Bloom.h"
class LawnApp;

class BLOOM_API IRegistry
{
  public:
	virtual void Run() = 0;
	virtual void Freeze() = 0;
	virtual void Update(const LawnApp &theLawnApp) = 0;
};

//#include "../Lawn/Projectile/Projectile.h"

template <class T> class BLOOM_API Registry : public IRegistry
{
	enum State
	{
		NOT_YET,
		RAN,
		FROZEN
	};

	std::vector<std::unique_ptr<RegistryHolder<T>>> mHolders;
	std::vector<T *> mTypes;
	std::unordered_map<std::string, const T *> mTypesByResourceId;
	int mNextId = 0;
	State mState = NOT_YET;

	void SupplyHolder(RegistryHolder<T> &theHolder, int theNumId)
	{
		auto [aCurrent, anOriginal] = theHolder.Supply();

		const std::string &aResourceIdAsString = aCurrent->mResourceId.AsString();

		auto anIterator = mTypesByResourceId.find(aResourceIdAsString);
		TOD_ASSERT(
			anIterator == mTypesByResourceId.end(),
			"Type with ResourceId %s already exists", aResourceIdAsString.c_str()
		);
		if (anIterator != mTypesByResourceId.end())
		{
			return;
		}

		aCurrent->mNumericalId = anOriginal->mNumericalId = theNumId;
		mTypes.push_back(aCurrent);
		mTypesByResourceId[aResourceIdAsString] = aCurrent;
	}

  public:
	static BLOOM_EXTERN_OR_INLINE Registry *gInstance;
	Registry()
	{
		gInstance = this;
	}
	Registry(const Registry &theCopied) = delete;
	Registry &operator=(const Registry &theCopied) = delete;
	
	const RegistryHolder<T> &Register(std::function<T *()> theSupplier)
	{
		TOD_ASSERT(mState != FROZEN, "Type registered too late");
		int anId = mNextId++;
		TOD_ASSERT(anId == mHolders.size());
		auto aHolder = std::make_unique<RegistryHolder<T>>(std::move(theSupplier));
		auto *aHolderPtr = aHolder.get();
		mHolders.push_back(std::move(aHolder));
		if (mState == RAN)
		{
			SupplyHolder(*aHolderPtr, anId);
		}
		return *mHolders[anId];
	}

	template <class S>
	const auto &Register(std::function<TypeOf<S> *()> theSupplier)
	{
		TOD_ASSERT(mState != FROZEN, "Type registered too late");
		int anId = mNextId++;
		TOD_ASSERT(anId == mHolders.size());
		if constexpr (std::is_final_v<S>)
		{
			auto aHolder = std::make_unique<RegistryHolder<T>>(std::move(theSupplier));
			auto *aHolderPtr = aHolder.get();
			mHolders.push_back(std::move(aHolder));
			if (mState == RAN)
			{
				SupplyHolder(*aHolderPtr, anId);
			}
			return *aHolderPtr;
		}
		else
		{
			auto aHolder = std::make_unique<RegistryTypeHolder<S, T>>(std::move(theSupplier));
			auto *aHolderPtr = aHolder.get();
			mHolders.push_back(std::move(aHolder));
			if (mState == RAN)
			{
				SupplyHolder(*aHolderPtr, anId);
			}
			return *aHolderPtr;
		}
	}

	template <class S>
	const auto &Register(
		const std::string &theModId,
		const std::string &theTypeId,
		const typename T::Attributes &theAttributes,
		const std::function<void(
			TypeOf<S> &,
			typename S::RegistryType::Attributes &
		)> &theInitializationModifier = [](
			TypeOf<S> &,
			typename S::RegistryType::Attributes &
		) {}
	)
	{
		return Register<S>([=]() {
			auto *aType = new TypeOf<S>(theModId, theTypeId, theAttributes);
			theInitializationModifier(*aType, aType->mAttributeBaseValues);
			return aType;
		});
	}

	const T *GetByResourceId(const ResourceId &theResourceId) const
	{
		return GetByResourceId(theResourceId.AsString());
	}
	const T *GetByResourceId(const std::string &theResourceIdAsString) const
	{
		auto anIterator = mTypesByResourceId.find(theResourceIdAsString);

		if (anIterator == mTypesByResourceId.end())
			return nullptr;

		return anIterator->second;
	}
	const T &GetByNumericalId(int theId) const
	{
		TOD_ASSERT(theId >= 0 && theId < mNextId);
		return *mTypes[theId];
	}
	const T &GetDefaultType() const
	{
		return *mTypes[0];
	}
	int GetNumOfTypes() const
	{
		return mNextId;
	}
	virtual void Run() override
	{
		TOD_ASSERT(mState == NOT_YET);

		for (int i = 0; i < mNextId; i++)
		{
			RegistryHolder<T> &aHolder = *mHolders[i];
			SupplyHolder(aHolder, i);
		}

		mState = RAN;
	}
	virtual void Freeze() override
	{
		TOD_ASSERT(mState == RAN);
		mState = FROZEN;
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