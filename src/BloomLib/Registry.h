#pragma once

#include "RegistryTypeHolder.h"
#include "ChunkedList.h"
#include "Bloom.h"

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
	int mNextId = 0;
	bool mFrozen = false;

  public:
	Registry() = default;
	const RegistryTypeHolder<T> &Register(T *(*theSupplier)())
	{
		int anId = mNextId++;
		if (!mFrozen)
		{
			mHolders.EnsureIndex(anId);
			mHolders[anId] = {theSupplier};
			return mHolders[anId];
		}
		return mHolders[0];
	}
	void Freeze()
	{
		if (mFrozen)
			return;

		for (int i = 0; i < mNextId; i++)
		{
			auto [aCurrent, anOriginal] = mHolders[i].Supply();

			aCurrent->mNumericalId = anOriginal->mNumericalId = i;

			mTypes.push_back(aCurrent);
		}

		mFrozen = true;
	}
	void Update(const LawnApp &theLawnApp)
	{
		for (auto aType : mTypes)
		{
			aType->Update(theLawnApp);
		}
	}
};