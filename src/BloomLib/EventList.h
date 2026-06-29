#pragma once

#include <vector>
#include <algorithm>

#include "Bloom.h"
#include "BillFunctional.h"

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
	return theT.mPriority < theOtherT.mPriority;
}

template <typename T> class BLOOM_API EventList
{
  public:
	struct Element
	{
		Transformer<T> mTransformer;
		EventPriority mPriority;
		bool operator==(const Element &theOther) const = default;
	};

  private:
	std::vector<Element> mElements;
	EventPriority mLowestPriorityEverAdded = EventPriority::HIGHEST;

  public:
	EventList() = default;

	Transformer<T> Add(Transformer<T> theTransformer, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return Add({theTransformer, thePriority});
	}
	Transformer<T> Add(const Element &theElement)
	{
		mElements.push_back(theElement);
		if (theElement.mPriority >= mLowestPriorityEverAdded)
			std::sort(mElements.begin(), mElements.end(), SortByEventPriority<Element>);
		else
			mLowestPriorityEverAdded = theElement.mPriority;
		return theElement.mTransformer;
	}
	Transformer<T> Remove(const Transformer<T> &theTransformer)
	{
		auto anElement = std::find_if(mElements.begin(), mElements.end(),
			[&](Element &theElement) { return theElement.mTransformer == theTransformer; }
		);
		mElements.erase(anElement);
		return theTransformer;
	}
	Transformer<T> Remove(const Element &theElement)
	{
		auto anElement = std::find(mElements.begin(), mElements.end(), theElement);
		mElements.erase(anElement);
		return theElement.mTransformer;
	}
	T &Fire(T &theContext) const
	{
		for (auto &anElement : mElements)
		{
			anElement.mTransformer(theContext);
			if (theContext.mCanceled)
				break;
		}
		return theContext;
	}
	T Fire(T &&theContext) const
	{
		for (auto &anElement : mElements)
		{
			anElement.mTransformer(theContext);
			if (theContext.mCanceled)
				break;
		}
		return theContext;
	}
};