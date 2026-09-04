#pragma once

#include <array>
#include <vector>

#include "PolymorphicWrapper.h"
#include "../Lawn/Projectile/ProjectileBehavior.h"

template <class T> class BehaviorList
{
  private:
	std::vector<PolymorphicWrapper<T>> mBehaviors;
  
  public:
	void Initialize(const T::Owner::Type &theOwnerType)
	{
		mBehaviors.emplace_back(*theOwnerType.mBehaviorType);
	}
	template <class ContextT> void Fire(void (T::*theFunction)(ContextT &), ContextT &theContext)
	{
		for (auto &aBehavior : mBehaviors)
		{
			(aBehavior->*theFunction)(theContext);
		}
	}
};