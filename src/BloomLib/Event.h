#pragma once

#include "BillFunctional.h"
#include "EventList.h"

template <class T> class BLOOM_API Event
{
  private:
	EventList<T> mSubscriptions;
	Event() = default;

  public:
	static Event &GetInstance()
	{
		static Event anInstance;
		return anInstance;
	}

	static T &Fire(T &theContext)
	{
		return GetInstance().mSubscriptions.Fire(theContext);
	}

	Transformer<T> Add(Transformer<T> theTransformer, EventPriority thePriority = EventPriority::DEFAULT)
	{
		return mSubscriptions.Add({theTransformer, thePriority});
	}
	Transformer<T> Remove(const Transformer<T> &theTransformer)
	{
		return mSubscriptions.Remove(theTransformer);
	}
};

#include "Events.h"