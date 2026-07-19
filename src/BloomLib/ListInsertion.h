#pragma once

#include "BillFunctional.h"
#include "EventPriority.h"

enum class ListInsertionType
{
	FIRST,
	AFTER,
	AFTER_PREDICATE,
	BEFORE,
	BEFORE_PREDICATE,
	LAST
};

//struct T
//{
//	int mLol;
//};

template <class T> struct ListInsertion
{
  public:

  private:
	ListInsertion(ListInsertionType theType, EventPriority thePriority, Predicate<T> thePredicate)
		: mType(theType), mPriority(thePriority), mPredicate(thePredicate)
	{
	}
	ListInsertion(ListInsertionType theType, EventPriority thePriority, const T &theT)
		: mType(theType), mPriority(thePriority), mT(&theT)
	{
	}

  public:
	ListInsertion() 
		: mType(ListInsertionType::LAST),
		mPriority(EventPriority::DEFAULT),
		mT(nullptr)
	{
	}
	ListInsertionType mType;
	EventPriority mPriority;
	union
	{
		Predicate<T> mPredicate;
		const T *mT;
	};
	static ListInsertion First(EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInsertion{ListInsertionType::FIRST, thePriority, nullptr};
	}
	static ListInsertion After(const T &theT, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInsertion{ListInsertionType::AFTER, thePriority, theT};
	}
	static ListInsertion After(Predicate<T> thePredicate, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInsertion{ListInsertionType::AFTER_PREDICATE, thePriority, thePredicate};
	}
	static ListInsertion Before(const T &theT, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInsertion{ListInsertionType::BEFORE, thePriority, theT};
	}
	static ListInsertion Before(Predicate<T> thePredicate, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInsertion{ListInsertionType::BEFORE_PREDICATE, thePriority, thePredicate};
	}
	static ListInsertion Last(EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInsertion{ListInsertionType::LAST, thePriority, nullptr};
	}
};