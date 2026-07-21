#pragma once

#include <type_traits>

enum class EventPriority
{
	LOWEST = -1610612736,
	LOWER = -1073741824,
	LOW = -536870912,
	DEFAULT = 0,
	HIGH = 536870912,
	HIGHER = 1073741824,
	HIGHEST = 1610612736
};

namespace EventPriorities
{

template <typename T> concept IntOrPriority = std::same_as<T, int> || std::same_as<T, EventPriority>;

template <IntOrPriority T, IntOrPriority S> EventPriority Between(T theOne, S theOther)
{
	return (EventPriority)(((int)theOne + (int)theOther) / 2);
}

}

template <class T> bool SortByEventPriority(const T &theT, const T &theOtherT)
{
	return theT.mPriority > theOtherT.mPriority;
}