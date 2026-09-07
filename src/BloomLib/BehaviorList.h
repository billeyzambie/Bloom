#pragma once

#include <array>
#include <vector>

#include "PolymorphicWrapper.h"
#include "BehaviorTypeList.h"
//#include "../Lawn/Projectile/ProjectileBehavior.h"

template <class T> class BehaviorList
{
  private:
	std::vector<PolymorphicWrapper<T>> mBehaviors;
  
  public:
	BehaviorList() = default;
	BehaviorList(const BehaviorList &theCopied) = delete;
	BehaviorList(BehaviorList &&theMoved) noexcept = default;
	BehaviorList &operator=(const BehaviorList &theCopied) = delete;
	BehaviorList &operator=(BehaviorList &&theMoved) noexcept = default;
	void Initialize(const T::Owner::Type &theOwnerType)
	{
		TOD_ASSERT(mBehaviors.empty());
		mBehaviors.resize(theOwnerType.mBehaviorTypes.GetBehaviorTypes().size());
		for (size_t i = 0; i < mBehaviors.size(); i++)
		{
			const T::Type *aType = theOwnerType.mBehaviorTypes.GetBehaviorTypes()[i];
			mBehaviors[i].Initialize(*aType);
		}
	}
	template <class ContextT> void Fire(void (T::*theFunction)(ContextT &), ContextT &theContext)
	{
		for (auto &aBehavior : mBehaviors)
		{
			(aBehavior->*theFunction)(theContext);
		}
	}
};