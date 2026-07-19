#pragma once

enum class EventPriority
{
	LOWEST = -3,
	LOWER = -2,
	LOW = -1,
	DEFAULT = 0,
	HIGH,
	HIGHER,
	HIGHEST
};

template <class T> bool SortByEventPriority(const T &theT, const T &theOtherT)
{
	return theT.mPriority > theOtherT.mPriority;
}