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

class Plant;
class Zombie;

struct BLOOM_API PlantEatenContext
{
	bool mCanceled;
	Plant &mEatenPlant;
	Zombie &mEaterZombie;
};

template class Event<PlantEatenContext>;

struct BLOOM_API PlantHurtContext
{
	Plant &mHurtPlant;
	Zombie *mDamagerZombie;
	Projectile *mDamagerProjectile;
};

template class Event<PlantHurtContext>;

struct BLOOM_API ZombieHurtContext
{
	Zombie &mHurtZombie;
	Plant *mDamagerPlant;
	Zombie *mDamagerZombie;
	Projectile *mDamagerProjectile;
};

template class Event<ZombieHurtContext>;