#pragma once

#include "RegistryTypeHolder.h"
#include "ChunkedList.h"
#include "BloomType.h"

template <class T> class Registry
{
	ChunkedList<RegistryTypeHolder<T>, 128> mHolders;
	std::vector<T *> mTypes;
	int mNextId = 0;
	bool mFrozen = false;

  public:
	Registry()
	{
	}
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
};