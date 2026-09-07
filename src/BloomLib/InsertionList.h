#pragma once

#include <vector>
#include <algorithm>
#include <span>

#include "Bloom.h"
#include "BillFunctional.h"
#include "EventPriority.h"
#include "ListInsertion.h"
//#include "BehaviorTypeList.h"

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
  public:
	static constexpr bool gContainsInsertion = requires(const T &theT) { theT.mInsertion; };

	struct DirectInsertor
	{
		const T *mT;

		DirectInsertor(const T *theT) : mT(theT)
		{
		}

		ListInsertion<T> GetInsertion() const
		{
			return mT->mInsertion;
		}

		bool ExcludeFromSorting() const
		{
			return mT->ExcludeFromSorting();
		}
	};

	struct StoredInsertor
	{
		const T *mT;
		ListInsertion<T> mInsertion;

		ListInsertion<T> GetInsertion() const
		{
			return mInsertion;
		}

		bool ExcludeFromSorting() const
		{
			return false;
		}
	};

	using Insertor = std::conditional_t<
		gContainsInsertion,
		DirectInsertor,
		StoredInsertor
	>;

  private:
	std::vector<Insertor> mInsertors;
	std::vector<const T *> mResult;
	int mTabSize;

  public:
	InsertionList(int theTabSize = 8)
		: mTabSize(theTabSize)
	{
		mInsertors.reserve(theTabSize);
		mResult.reserve(theTabSize);
	}
	void Add(Insertor theInsertor)
	{
		mInsertors.push_back(theInsertor);
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
	std::span<const T *const> GetResult() const
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
		std::stable_sort(mInsertors.begin(), mInsertors.end(), [](const Insertor &theInsertor, const Insertor &theOtherInsertor) {
			return theInsertor.GetInsertion().mPriority > theOtherInsertor.GetInsertion().mPriority;
		});

		mResult.clear();
		mResult.reserve(mInsertors.size());

		for (const Insertor &anInsertor : mInsertors)
		{
			if (anInsertor.ExcludeFromSorting())
				continue;

			const ListInsertion<T> &anInsertion = anInsertor.GetInsertion();

			const T *aT = anInsertor.mT;

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