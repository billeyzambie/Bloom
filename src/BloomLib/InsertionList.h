#pragma once

#include <vector>
#include <algorithm>
#include <span>

#include "Bloom.h"
#include "BillFunctional.h"
#include "EventPriority.h"
#include "ListInsertion.h"

//struct T
//{
//	ListInsertion<T> mInsertion;
//	bool ExcludeFromSorting() const
//	{
//		return false;
//	}
//};

template <class T> class BLOOM_API InsertionList
{
  private:
	std::vector<const T *> mInsertors;
	std::vector<const T *> mResult;
	int mTabSize;

  public:
	InsertionList(int theTabSize = 8)
		: mTabSize(theTabSize)
	{
		mInsertors.reserve(theTabSize);
		mResult.reserve(theTabSize);
	}
	void Add(const T *theT)
	{
		mInsertors.push_back(theT);
	}
	void Clear()
	{
		mInsertors.clear();
	}
	size_t GetResultSize()
	{
		return mResult.size();
	}
	bool IsEmpty()
	{
		return mResult.empty();
	}
	std::span<const T *const> GetResult()
	{
		return mResult;
	}
	const T *const *begin()
	{
		return &mResult[0];
	}
	const T *const *end()
	{
		return &mResult[mResult.size() - 1] + 1;
	}
	void Refresh()
	{
		std::stable_sort(mInsertors.begin(), mInsertors.end(), [](const T *theT, const T *theOtherT) {
			return theT->mInsertion.mPriority > theOtherT->mInsertion.mPriority;
		});

		mResult.clear();
		mResult.reserve(mInsertors.size());

		for (const T *aT : mInsertors)
		{
			if (aT->ExcludeFromSorting())
				continue;

			const ListInsertion<T> &anInsertion = aT->mInsertion;

			switch (anInsertion.mType)
			{
			case ListInsertionType::FIRST:
			{
				mResult.insert(mResult.begin(), aT);
				break;
			}

			case ListInsertionType::AFTER: 
			{
				auto anIterator = std::find_if(mResult.begin(), mResult.end(), [&](const T *theT) {
					return theT == anInsertion.mT; 
				});
				if (anIterator != mResult.end())
					mResult.insert(anIterator + 1, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInsertionType::AFTER_PREDICATE:
			{
				auto anIterator = std::find_if(mResult.begin(), mResult.end(), [&](const T *theT) {
					return anInsertion.mPredicate(*theT); 
				});
				if (anIterator != mResult.end())
					mResult.insert(anIterator + 1, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInsertionType::BEFORE:
			{
				auto anIterator = std::find_if(mResult.begin(), mResult.end(), [&](const T *theT) {
					return theT == anInsertion.mT; 
				});
				if (anIterator != mResult.end())
					mResult.insert(anIterator, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInsertionType::BEFORE_PREDICATE:
			{
				auto anIterator = std::find_if(mResult.begin(), mResult.end(), [&](const T *theT) {
					return anInsertion.mPredicate(*theT); 
				});
				if (anIterator != mResult.end())
					mResult.insert(anIterator, aT);
				else
					mResult.push_back(aT);
				break;
			}

			case ListInsertionType::LAST: 
			{
				mResult.push_back(aT);
				break;
			}

			}
		}

	}
};