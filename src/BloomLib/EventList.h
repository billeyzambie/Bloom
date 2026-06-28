#pragma once

#include <vector>
#include <algorithm>

#include "Bloom.h"
#include "BillFunctional.h"

enum class EventPriority
{
	LOWEST = -2,
	LOW = -1,
	DEFAULT,
	HIGH,
	HIGHEST
};

template <class T> bool SortByEventPriority(const T &theT, const T &theOtherT)
{
	return theT.mPriority < theOtherT.mPriority;
}

template <typename T> class BLOOM_API EventList
{
  public:
	struct Element
	{
		T mT;
		EventPriority mPriority;
		bool operator==(const Element &theOther) const = default;
	};

  private:
	std::vector<Element> mElements;
	EventPriority mLowestPriorityEverAdded = EventPriority::HIGHEST;

  public:
	EventList() = default;

	void Add(const Element &theElement)
	{
		mElements.push_back(theElement);
		if (theElement.mPriority >= mLowestPriorityEverAdded)
			std::sort(mElements.begin(), mElements.end(), SortByEventPriority<Element>);
		else
			mLowestPriorityEverAdded = theElement.mPriority;
	}
	void Remove(const T &theT)
	{
		auto anElement = std::find(mElements.begin(), mElements.end(),
			[&](Element &theElement) { return theElement.mT == theT; }
		);
		mElements.erase(anElement);
	}
	void Remove(const Element &theElement)
	{
		auto anElement = std::find(mElements.begin(), mElements.end(),
			[&](const Element &theLambdaElement) { return theLambdaElement == theElement; }
		);
		mElements.erase(anElement);
	}
};