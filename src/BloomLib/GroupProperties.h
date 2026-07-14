#pragma once

#include "EventList.h"
#include "SortContext.h"

//#include "../Lawn/StoreItem/StoreItemType.h"

template <class> class GroupTab;

template <class T> struct BLOOM_API GroupProperties
{
	EventList<SortContext<T>> mSort;
	const GroupTab<T> *mTab = nullptr;
	void PlaceAtStart(EventPriority thePriority = EventPriority::DEFAULT)
	{
		mSort.Add(
			[](SortContext<T> &theContext) { theContext.mResult = SortResult::PLACE_AT_START; },
			thePriority
		);
	}
	void PlaceAtEnd(EventPriority thePriority = EventPriority::DEFAULT)
	{
		mSort.Add(
			[](SortContext<T> &theContext) { theContext.mResult = SortResult::PLACE_AT_END; },
			thePriority
		);
	}
};