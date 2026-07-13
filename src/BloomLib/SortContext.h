#pragma once

#include "Bloom.h"
#include "EventList.h"

template <class T> struct BLOOM_API SortContext
{
	const T &mTheOne;
	const T &mTheOther;
	bool mResult = 0;
};