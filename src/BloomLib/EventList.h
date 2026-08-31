#pragma once

#include <vector>
#include <algorithm>

#include "Bloom.h"
#include "BillFunctional.h"
#include "EventPriority.h"

template <class T>
concept IsEventCancellable = requires(T theT) { theT.mCanceled; };

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

  public:
	EventList() = default;

	Transformer<T> Add(Transformer<T> theTransformer, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return Add({theTransformer, thePriority});
	}
	Transformer<T> Add(const Element &theElement)
	{
		mElements.push_back(theElement);
		std::stable_sort(mElements.begin(), mElements.end(), SortByEventPriority<Element>);
		return theElement.mTransformer;
	}
	Transformer<T> Remove(Transformer<T> theTransformer)
	{
		auto anElement = std::find_if(mElements.begin(), mElements.end(),
			[=](Element &theElement) { return theElement.mTransformer == theTransformer; }
		);
		if (anElement != mElements.end())
			mElements.erase(anElement);
		return theTransformer;
	}
	Transformer<T> Remove(const Element &theElement)
	{
		auto anElement = std::find(mElements.begin(), mElements.end(), theElement);
		if (anElement != mElements.end())
			mElements.erase(anElement);
		return theElement.mTransformer;
	}
	T &Fire(T &theContext) const
	{
		for (auto &anElement : mElements)
		{
			anElement.mTransformer(theContext);
			if constexpr (IsEventCancellable<T>) 
			{
				if (theContext.mCanceled)
					break;
			}
		}
		return theContext;
	}
};