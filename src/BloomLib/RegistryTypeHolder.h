#pragma once

#include "../Sexy.TodLib/TodDebug.h"
#include "PatchHolder.h"

template <class T> class BLOOM_API RegistryTypeHolder
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

	const T *TryGet() const
	{
		return mType;
	}

	const T &Get() const
	{
		TOD_ASSERT(mType != nullptr, "RegistryTypeHolder unwrapped before it got registered")
		return *mType;
	}

	operator const T *() const
	{
		return TryGet();
	}

	operator const T &() const
	{
		return Get();
	}

	const T *operator->() const
	{
		return TryGet();
	}

	std::tuple<T *, T *> Supply()
	{
		TOD_ASSERT(!mType)
		if (mType)
			return {nullptr, nullptr};

		auto *aPatchHolder = new PatchHolder<T>(mSupplier);

		mType = aPatchHolder->mCurrent;

		return {aPatchHolder->mCurrent, aPatchHolder->mOriginal};
	}
};