#pragma once

#include "InsertionList.h"
#include "Registry.h"


//struct T
//{
//	ListInsertion<T> mSort;
//	const GroupT *mGroup;
//	bool ExcludeFromSorting() const
//	{
//		return false;
//	}
//	int GetNumericalId() const
//	{
//		return 0;
//	}
//};
//
//struct GroupT
//{
//	ListInsertion<T> mSort;
//	bool ExcludeFromSorting() const
//	{
//		return false;
//	}
//	int GetNumericalId() const
//	{
//		return 0;
//	}
//};

template <class GroupT, class T> class BLOOM_API InsertionListGroup
{
  private:
	const Registry<GroupT> &mGroupRegistry;
	const Registry<T> &mTRegistry;

	InsertionList<GroupT> mGroups;
	std::vector<const T *> mResult;
	std::vector<int> mFirstPageByGroup;

  public:
	InsertionListGroup(const Registry<GroupT> &theGroupRegistry, const Registry<T> &theTRegistry)
		: mGroupRegistry(theGroupRegistry), mTRegistry(theTRegistry)
	{
		for (const GroupT *aGroup : theGroupRegistry)
		{
			mGroups.Add(aGroup);
		}
		mFirstPageByGroup.resize(theGroupRegistry.GetNumOfTypes() + 1);
	}
	int PageCount() const
	{
		return mResult.size() / 8;
	}
	int GetFirstPageOf(const GroupT &theGroup) const
	{
		return mFirstPageByGroup[theGroup.GetNumericalId()];
	}
	int GetFirstPageOfNullGroup() const
	{
		return mFirstPageByGroup[mGroupRegistry.GetNumOfTypes()];
	}
	int GetFirstPageOf(const GroupT *theGroup) const
	{
		if (theGroup)
			return GetFirstPageOf(*theGroup);
		else
			return GetFirstPageOfNullGroup();
	}
	int GetFirstPageOf(const RegistryTypeHolder<GroupT> &theGroup) const
	{
		return GetFirstPageOf(theGroup.Get());
	}
	void Refresh()
	{
		mResult.clear();
		mResult.reserve(mTRegistry.GetNumOfTypes());

		mGroups.Refresh();

		std::vector<InsertionList<T>> aTsByGroup;

		int aNumOfGroupsInRegistry = mGroupRegistry.GetNumOfTypes();

		aTsByGroup.resize(aNumOfGroupsInRegistry + 1);

		for (const T *aT : mTRegistry)
		{
			const GroupT *aGroup = aT->mGroup;
			if (aGroup)
				aTsByGroup[aGroup->GetNumericalId()].Add(aT);
			else
				aTsByGroup[aNumOfGroupsInRegistry].Add(aT);
		}

		for (const GroupT *aGroup : mGroups)
		{
			int aNumId = aGroup->GetNumericalId();

			mFirstPageByGroup[aNumId] = mResult.size() / 8;

			InsertionList<T> &aList = aTsByGroup[aNumId];
			aList.Refresh();

			if (!aList.IsEmpty()) for (const T *aT : aList)
			{
				mResult.push_back(aT);
			}
			int aRemainder = aList.GetResultSize() % 8;
			if (aRemainder)
			{
				for (int i = 0; i < 8 - aRemainder; i++)
					mResult.push_back(nullptr);
			}
		}

		mFirstPageByGroup[aNumOfGroupsInRegistry] = mResult.size() / 8;
		InsertionList<T> &aList = aTsByGroup[aNumOfGroupsInRegistry];
		aList.Refresh();

		if (!aList.IsEmpty()) for (const T *aT : aList)
		{
			mResult.push_back(aT);
		}
		int aRemainder = aList.GetResultSize() % 8;
		if (aRemainder)
		{
			for (int i = 0; i < 8 - aRemainder; i++)
				mResult.push_back(nullptr);
		}
	}
	const T *operator[](size_t theIndex)
	{
		return mResult[theIndex];
	}
};