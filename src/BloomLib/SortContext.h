#pragma once

#include "Bloom.h"
#include "EventList.h"

//#include "../Lawn/StoreItem/StoreItemType.h"

enum class SortResult
{
	PLACE_AT_START = -2,
	PLACE_BEFORE = -1,
	PLACE_IGNORE,
	PLACE_AFTER,
	PLACE_AT_END
};

template <class T> struct SortContext
{
	const T &mTheOne;
	const T &mTheOther;
	SortResult mResult = SortResult::PLACE_IGNORE;
};

template <class T> bool SortGroupItems(const T *theT, const T *theOtherT)
{
	SortContext<T> aContext{*theT, *theOtherT};
	SortContext<T> anotherContext{*theOtherT, *theT};
	theT->mGroupProperties.mSort.Fire(aContext);
	theOtherT->mGroupProperties.mSort.Fire(anotherContext);
	return aContext.mResult < anotherContext.mResult;
}