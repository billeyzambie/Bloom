#pragma once

#include <vector>
#include <type_traits>
#include "Patch.h"

template <class T> class BLOOM_API PatchHolder
{
	template <class U> friend class RegistryTypeHolder;

	T *mOriginal;
	T *mCurrent;

	std::vector<Patch<T>> mGlobalPatches;
	std::vector<Patch<T>> mLocalPatches;

	bool mDirty = false;

	PatchHolder(T *(*theSupplier)()) : mOriginal(theSupplier()), mCurrent(theSupplier())
	{
		mOriginal->mPatchHolder = this;
		mCurrent->mPatchHolder = this;
	}

  public:
	void Update()
	{
		if (!mDirty)
			return;

		mCurrent->CopyFrom(*mOriginal);

		for (auto &aPatch : mGlobalPatches)
		{
			aPatch(*mCurrent);
		}

		for (auto &aPatch : mLocalPatches)
		{
			aPatch(*mCurrent);
		}

		mDirty = false;
	}

	void AddGlobalPatch(Patch<T> thePatch)
	{
		mGlobalPatches.push_back(std::move(thePatch));
		mDirty = true;
	}

	void AddLocalPatch(Patch<T> thePatch)
	{
		mLocalPatches.push_back(std::move(thePatch));
		mDirty = true;
	}

	void ClearGlobalPatches()
	{
		mGlobalPatches.clear();
		mDirty = true;
	}

	void ClearLocalPatches()
	{
		mLocalPatches.clear();
		mDirty = true;
	}
};