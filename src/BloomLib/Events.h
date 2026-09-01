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

} // namespace Events

class GameObject;
class Plant;
class Zombie;
class Damage;

template <class T> struct BLOOM_API MakeCancelable : public T
{
	bool mCanceled = false;
};

struct BLOOM_API PlantEatenContext
{
	bool mCanceled;
	Plant &mEatenPlant;
	Zombie &mEaterZombie;
};

template class Event<PlantEatenContext>;

struct BLOOM_API GameObjectHurtAfterContext
{
	GameObject &mHurtGameObject;
	Damage &mDamage;
};

using GameObjectHurtBeforeContext = MakeCancelable<GameObjectHurtAfterContext>;

template class Event<GameObjectHurtAfterContext>;
template class Event<GameObjectHurtBeforeContext>;