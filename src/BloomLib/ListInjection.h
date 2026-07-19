#pragma once

#include "BillFunctional.h"
#include "EventPriority.h"

//struct T
//{
//	int mLol;
//};


enum class ListInjectionType
{
	FIRST,
	AFTER,
	AFTER_PREDICATE,
	BEFORE,
	BEFORE_PREDICATE,
	LAST
};

template <class T> struct ListInjection
{
  public:

  private:
	ListInjection(ListInjectionType theType, EventPriority thePriority, Predicate<T> thePredicate)
		: mType(theType), mPriority(thePriority), mPredicate(thePredicate)
	{
	}
	ListInjection(ListInjectionType theType, EventPriority thePriority, const T &theT)
		: mType(theType), mPriority(thePriority), mT(&theT)
	{
	}

  public:
	ListInjectionType mType;
	EventPriority mPriority;
	union
	{
		Predicate<T *> mPredicate;
		const T *mT;
	};
	static ListInjection First(EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInjection{ListInjectionType::FIRST, thePriority, nullptr};
	}
	static ListInjection After(const T &theT, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInjection{ListInjectionType::AFTER, thePriority, theT};
	}
	static ListInjection After(Predicate<T> thePredicate, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInjection{ListInjectionType::AFTER_PREDICATE, thePriority, thePredicate};
	}
	static ListInjection Before(const T &theT, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInjection{ListInjectionType::BEFORE, thePriority, theT};
	}
	static ListInjection Before(Predicate<T> thePredicate, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInjection{ListInjectionType::BEFORE_PREDICATE, thePriority, thePredicate};
	}
	static ListInjection Last(EventPriority thePriority = EventPriority::DEFAULT)
	{
		return ListInjection{ListInjectionType::LAST, thePriority, nullptr};
	}
};