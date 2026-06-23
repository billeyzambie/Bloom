#pragma once

#include "Event.h"

namespace Events
{

template <class T> Transformer<T> Subscribe(Transformer<T> theContextTransformer)
{
	return Event<T>::GetInstance() += theContextTransformer;
}

template <class T> Transformer<T> Unsubscribe(Transformer<T> theContextTransformer)
{
	return Event<T>::GetInstance() -= theContextTransformer;
}

}

template class Event<PlantEatenContext>;