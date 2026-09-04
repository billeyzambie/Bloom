#pragma once

//#include "../Lawn/Projectile/ProjectileBehavior.h"
#include "../Sexy.TodLib/TodDebug.h"

template <class T> class PolymorphicWrapper
{
  private:
	alignas(T) char mBuffer[T::Type::INSTANCE_MAX_SIZE];
	T *mObject = nullptr;
  public:
	PolymorphicWrapper() = default;
	PolymorphicWrapper(const T::Type &theType)
	{
		Initialize(theType);
	}
	~PolymorphicWrapper()
	{
		if (mObject)
			mObject->~T();
	}
	T *Initialize(const T::Type &theType)
	{
		if (mObject)
			Clear();
		return mObject = theType.Instantiate(mBuffer);
	}
	T *TryGet()
	{
		return mObject;
	}
	T &Get()
	{
		TOD_ASSERT(mObject);
		return *mObject;
	}
	T *operator->()
	{
		return mObject;
	}
	operator T *()
	{
		return TryGet();
	}
	operator T &()
	{
		return Get();
	}
	bool Clear()
	{
		if (!mObject)
			return false;
		mObject->~T();
		mObject = nullptr;
		return true;
	}
};