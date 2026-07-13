#pragma once

#include <vector>
#include <algorithm>
#include <span>

#include "Bloom.h"
#include "GroupTab.h"
#include "Registry.h"

#include "../Lawn/StoreItem/StoreItemType.h"

template <class T> class BLOOM_API GroupList
{
  private:
	int mNumOfPages;
	std::vector<const T *> mResult;

  public:
	const int mPageSize;
	
	GroupList(int thePageSize) : mPageSize(thePageSize)
	{
	}
	std::span<const T *const> GetElements()
	{
		return std::span<const T *const>(mResult);
	}

	int GetNumOfPages()
	{
		return mResult.size();
	}

	void Sort()
	{
		mResult.clear();
		mResult.reserve(Registry<T>::gInstance->GetNumOfTypes());

		std::vector<const GroupTab<T> *> aSortedGroupTabs;

		for (const GroupTab<T> *aTab : *Registry<GroupTab<T>>::gInstance)
		{
			aSortedGroupTabs.push_back(aTab);
		}

		std::stable_sort(
			aSortedGroupTabs.begin(),
			aSortedGroupTabs.end(),
			[](const GroupTab<T> *thePage, const GroupTab<T> *theOtherPage) {
				SortContext<GroupTab<T>> aContext{*thePage, *theOtherPage};
				thePage->mSort.Fire(aContext);
				return aContext.mResult;
			}
		);

		std::vector<std::vector<const T *>> aTsByTab;
		aTsByTab.resize(aSortedGroupTabs.size() + 1);

		for (auto &aVector : aTsByTab)
		{
			aVector.reserve(mPageSize);
		}

		for (size_t i = 0; i < aSortedGroupTabs.size(); i++)
		{
			auto *aTab = aSortedGroupTabs[i];
			for (const T *aT : *Registry<T>::gInstance)
			{
				if (aT->mHideFromTabs)
				{
					continue;
				}
				else if (aT->mTab == aTab)
				{
					aTsByTab[i].push_back(aT);
				}
				else if (aT->mTab == nullptr)
				{
					aTsByTab[aSortedGroupTabs.size()].push_back(aT);
				}
			}
		}

		mNumOfPages = 0;

		for (auto &aVector : aTsByTab)
		{
			for (const T *aT : aVector)
			{
				mResult.push_back(aT);
			}

			for (size_t i = 0; i < mPageSize - aVector.size() % mPageSize; i++)
			{
				mResult.push_back(nullptr);
			}

			if (aVector.size())
				mNumOfPages += (aVector.size() - 1) / mPageSize + 1;
		}

	}
};