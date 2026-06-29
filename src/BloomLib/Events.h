#pragma once

#include "Event.h"

namespace Events
{

template <class T> Transformer<T> Subscribe(Transformer<T> theContextTransformer, EventPriority thePriority = EventPriority::DEFAULT)
{
	return Event<T>::GetInstance().Add(theContextTransformer, thePriority);
}

template <class T> Transformer<T> Unsubscribe(Transformer<T> theContextTransformer)
{
	return Event<T>::GetInstance().Remove(theContextTransformer);
}

}

template class Event<PlantEatenContext>;