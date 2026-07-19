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

  public:
	InsertionListGroup(const Registry<GroupT> &theGroupRegistry, const Registry<T> &theTRegistry)
		: mGroupRegistry(theGroupRegistry), mTRegistry(theTRegistry)
	{
		for (const GroupT *aGroup : theGroupRegistry)
		{
			mGroups.Add(aGroup);
		}
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
			InsertionList<T> &aList = aTsByGroup[aGroup->GetNumericalId()];
			aList.Refresh();

			if (!aList.IsEmpty()) for (const T *aT : aList)
			{
				mResult.push_back(aT);
				int anExtraSpaceCount = 8 - aList.GetResultSize() % 8;
				if (anExtraSpaceCount)
				{
					for (int i = 0; i < anExtraSpaceCount; i++)
						mResult.push_back(nullptr);
				}
			}
		}

		InsertionList<T> &aList = aTsByGroup[aNumOfGroupsInRegistry];
		if (!aList.IsEmpty()) for (const T *aT : aList)
		{
			mResult.push_back(aT);
			int anExtraSpaceCount = 8 - aList.GetResultSize() % 8;
			if (anExtraSpaceCount)
			{
				for (int i = 0; i < anExtraSpaceCount; i++)
					mResult.push_back(nullptr);
			}
		}
	}
	const T *operator[](size_t theIndex)
	{
		return mResult[theIndex];
	}
};