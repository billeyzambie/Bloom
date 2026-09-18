#pragma once

#include <functional>

#include "../Sexy.TodLib/TodDebug.h"
#include "BloomType.h"
#include "PatchHolder.h"

template <class T> class RegistryHolder
{
  protected:
	T *mType = nullptr;
	std::function<T *()> mSupplier;

  public:
	RegistryHolder(std::function<T *()> theSupplier) : mSupplier(std::move(theSupplier))
	{
	}
	RegistryHolder() = default;
	virtual ~RegistryHolder() = default;
	RegistryHolder(const RegistryHolder &theCopied) = delete;

	const T *TryGet() const
	{
		return mType;
	}

	const T &Get() const
	{
		TOD_ASSERT(mType != nullptr, "RegistryHolder unwrapped before it got registered")
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

template <class S, class T> class RegistryTypeHolder : public RegistryHolder<T>
{
  public:
	using RegistryHolder<T>::RegistryHolder;

	template <class U = S> const TypeOf<U> *TryGet() const
	{
		return static_cast<const TypeOf<U> *>(this->mType);
	}

	template <class U = S> const TypeOf<U> &Get() const
	{
		TOD_ASSERT(this->mType != nullptr, "RegistryHolder unwrapped before it got registered")
		return static_cast<const TypeOf<U> &>(*this->mType);
	}

	template <class U = S> operator const TypeOf<U> *() const
	{
		return TryGet();
	}

	template <class U = S> operator const TypeOf<U> &() const
	{
		return Get();
	}
};