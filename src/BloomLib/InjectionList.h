#pragma once

#include <vector>
#include <algorithm>

#include "Bloom.h"
#include "BillFunctional.h"
#include "EventPriority.h"
#include "ListInjection.h"

struct T
{
	int mLol;
	ListInjection<T> mSort;
};

class BLOOM_API InjectionList
{
  private:
	std::vector<const T *> mInjectors;
	std::vector<const T *> mResult;

  public:
	InjectionList() = default;
	void Add(const T *theT)
	{
		mInjectors.push_back(theT);
	}
	void Clear()
	{
		mInjectors.clear();
	}
	void Refresh()
	{
		std::stable_sort(mInjectors.begin(), mInjectors.end(), [](const T &theT, const T &theOtherT) {
			return theT.mSort.mPriority > theOtherT.mSort.mPriority;
		});

		mResult.clear();
		mResult.reserve(mInjectors.size());

		for (const T *aT : mInjectors)
		{
			const ListInjection<T> &anInjection = aT->mSort;

			switch (anInjection.mType)
			{
			case ListInjectionType::FIRST:
			{
				mResult.insert(mResult.begin(), aT);
				break;
			}

			case ListInjectionType::AFTER: 
			{
				auto anIterator = std::find(mResult.begin(), mResult.end(), [&](const T *theT) {
					return theT == anInjection.mT; 
				});
				if (anIterator != mResult.end())
					mResult.insert(anIterator + 1, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInjectionType::AFTER_PREDICATE:
			{
				auto anIterator = std::find(mResult.begin(), mResult.end(), anInjection.mPredicate);
				if (anIterator != mResult.end())
					mResult.insert(anIterator + 1, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInjectionType::BEFORE:
			{
				auto anIterator = std::find(mResult.begin(), mResult.end(), [&](const T *theT) {
					return theT == anInjection.mT; 
				});
				if (anIterator != mResult.end())
					mResult.insert(anIterator, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInjectionType::BEFORE_PREDICATE:
			{
				auto anIterator = std::find(mResult.begin(), mResult.end(), anInjection.mPredicate);
				if (anIterator != mResult.end())
					mResult.insert(anIterator, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInjectionType::LAST: 
			{
				mResult.push_back(aT);
				break;
			}

			}
		}
	}
};