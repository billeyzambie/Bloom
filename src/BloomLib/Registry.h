#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <memory>

#include "RegistryTypeHolder.h"
#include "BloomType.h"
#include "NamespacedString.h"
#include "Bloom.h"

//#include "../Lawn/Projectile/Projectile.h"

class LawnApp;

class BLOOM_API IRegistry
{
  public:
	virtual void Freeze() = 0;
	virtual void Update(const LawnApp &theLawnApp) = 0;
};

template <class T> class BLOOM_API Registry : public IRegistry
{
	std::vector<std::unique_ptr<RegistryHolder<T>>> mHolders;
	std::vector<T *> mTypes;
	std::unordered_map<std::string, const T *> mTypesByResourceId;
	int mNextId = 0;
	bool mFrozen = false;

  public:

	static BLOOM_EXTERN_OR_INLINE Registry *gInstance;
	Registry()
	{
		gInstance = this;
	}
	Registry(const Registry &theCopied) = delete;
	Registry &operator=(const Registry &theCopied) = delete;

	template <class S>
	const RegistryTypeHolder<S, T> &Register(std::function<TypeOf<S> *()> theSupplier)
	{
		TOD_ASSERT(!mFrozen, "Type registered too late");
		int anId = mNextId++;
		TOD_ASSERT(anId == mHolders.size());
		auto aHolder = std::make_unique<RegistryTypeHolder<S, T>>(std::move(theSupplier));
		auto *aHolderPtr = aHolder.get();
		mHolders.push_back(std::move(aHolder));
		return *aHolderPtr;
	}
	
	const RegistryHolder<T> &Register(std::function<T *()> theSupplier)
	{
		TOD_ASSERT(!mFrozen, "Type registered too late");
		int anId = mNextId++;
		TOD_ASSERT(anId == mHolders.size());
		mHolders.push_back(
			std::make_unique<RegistryHolder<T>>(std::move(theSupplier))
		);
		return *mHolders[anId];
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
	const T &GetDefaultType() const
	{
		return *mTypes[0];
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
			auto [aCurrent, anOriginal] = mHolders[i]->Supply();

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