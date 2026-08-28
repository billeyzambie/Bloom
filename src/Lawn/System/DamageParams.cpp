#include "DamageParams.h"

DamageParams::DamageParams(
	int theAmount, unsigned int theFlags, Plant *theDamagerPlant, 
	Zombie *theDamagerZombie, Projectile *theDamagerProjectile
)
	: mAmount(theAmount), mFlags(theFlags), mDamagerPlant(theDamagerPlant), 
	mDamagerZombie(theDamagerZombie), mDamagerProjectile(theDamagerProjectile)
{
}

DamageParams DamageParams::DirectlyFromPlant(int theAmount, unsigned int theFlags, Plant *theDamagerPlant)
{
	return {theAmount, theFlags, theDamagerPlant, nullptr, nullptr};
}

DamageParams DamageParams::DirectlyFromZombie(int theAmount, unsigned int theFlags, Zombie *theDamagerZombie)
{
	return {theAmount, theFlags, nullptr, theDamagerZombie, nullptr};
}

DamageParams DamageParams::FromPlantProjectile(
	int theAmount, unsigned int theFlags,
	Plant *theDamagerPlant, Projectile *theDamagerProjectile
)
{
	return {theAmount, theFlags, theDamagerPlant, nullptr, theDamagerProjectile};
}

DamageParams DamageParams::FromZombieProjectile(
	int theAmount, unsigned int theFlags,
	Zombie *theDamagerZombie, Projectile *theDamagerProjectile
)
{
	return {theAmount, theFlags, nullptr, theDamagerZombie, theDamagerProjectile};
}

DamageParams DamageParams::FromNowhere(int theAmount, unsigned int theFlags)
{
	return {theAmount, theFlags, nullptr, nullptr, nullptr};
}