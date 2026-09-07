#pragma once

//#include "../Lawn/Projectile/ProjectileBehaviorType.h"
#include "RegistryTypeHolder.h"
#include "InsertionList.h"

template <class T> class BehaviorTypeList
{
  private:
	InsertionList<T> mInsertionList;

  public:
	BehaviorTypeList() = default;
	void Add(
		const RegistryTypeHolder<T> &theBehaviorType,
		ListInsertion<T> theInsertion = ListInsertion<T>::Last()
	)
	{
		const T *aType = theBehaviorType.TryGet();
		TOD_ASSERT(aType);
		mInsertionList.Add({aType, theInsertion});
		mInsertionList.Refresh();
	}
	std::span<const T *const> GetBehaviorTypes() const
	{
		return mInsertionList.GetResult();
	}
};