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
	~PolymorphicWrapper()
	{
		if (mObject)
			mObject->~T();
	}
	void Initialize(const T::Type &theType)
	{
		if (mObject)
			Clear();
		mObject = theType.Instantiate(mBuffer);
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
	bool Clear()
	{
		if (!mObject)
			return false;
		mObject->~T();
		mObject = nullptr;
		return true;
	}
};