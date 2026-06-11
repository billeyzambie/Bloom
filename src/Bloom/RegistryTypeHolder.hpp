#pragma once

#include "../Sexy.TodLib/TodDebug.h"
#include "PatchHolder.hpp"

template <class T> class RegistryTypeHolder
{
  private:
	T *mType = nullptr;
	T *(*mSupplier)();

  public:
	RegistryTypeHolder(T *(*theSupplier)()) : mSupplier(theSupplier)
	{
	}
	RegistryTypeHolder() : mSupplier(nullptr)
	{
	}
	RegistryTypeHolder(const RegistryTypeHolder &theCopied) = delete;

	const T *Get() const
	{
		TOD_ASSERT(mType != nullptr, "RegistryTypeHolder unwrapped before it got registered")
		return mType;
	}

	operator const T *() const
	{
		return Get();
	}

	const T *operator->() const
	{
		return Get();
	}

	T *Supply()
	{
		TOD_ASSERT(!mType)
		if (mType)
			return nullptr;

		auto *aPatchHolder = new PatchHolder<T>(mSupplier);

		mType = aPatchHolder->mCurrent;

		return mType;
	}
};