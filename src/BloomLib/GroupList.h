#pragma once

#include <vector>
#include <algorithm>
#include <span>

#include "Bloom.h"
#include "GroupTab.h"
#include "Registry.h"

//#include "../Lawn/StoreItem/StoreItemType.h"

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
	std::span<const T *const> GetElements() const
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
			if (!aTab->ShouldHideFromTabs())
				aSortedGroupTabs.push_back(aTab);
		}

		std::stable_sort(aSortedGroupTabs.begin(), aSortedGroupTabs.end(), SortGroupItems<GroupTab<T>>);

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
				auto &aGroupProperties = aT->mGroupProperties;
				if (aT->ShouldHideFromTabs())
				{
					continue;
				}
				else if (aGroupProperties.mTab == aTab)
				{
					aTsByTab[i].push_back(aT);
				}
				else if (aGroupProperties.mTab == nullptr)
				{
					aTsByTab[aSortedGroupTabs.size()].push_back(aT);
				}
			}
		}

		mNumOfPages = 0;

		for (auto &aVector : aTsByTab)
		{
			std::stable_sort(aVector.begin(), aVector.end(), SortGroupItems<T>);

			for (const T *aT : aVector)
			{
				mResult.push_back(aT);
			}

			if (aVector.size() % mPageSize)
			{
				for (size_t i = 0; i < mPageSize - aVector.size() % mPageSize; i++)
				{
					mResult.push_back(nullptr);
				}
			}

			if (aVector.size())
				mNumOfPages += (aVector.size() - 1) / mPageSize + 1;
		}

	}
};