#include "Damage.h"
#include "../Projectile/Projectile.h"
#include "../Board.h"

Damage::Damage(
	int theAmount, unsigned int theFlags,
	GameObject *theDamager, Projectile *theDamagerProjectile
)
	: mAmount(theAmount), mFlags(theFlags),
	mDamager(theDamager), mDamagerProjectile(theDamagerProjectile)
{
}

Damage Damage::DirectlyFrom(GameObject *theDamager, int theAmount, unsigned int theFlags)
{
	return {theAmount, theFlags, theDamager, nullptr};
}

Damage Damage::FromProjectile(Projectile *theDamagerProjectile, int theAmount, unsigned int theFlags)
{
	GameObject *anOwner = 
		theDamagerProjectile 
			? theDamagerProjectile->mBoard->GameObjectTryToGet(theDamagerProjectile->mOwner) 
			: nullptr;

	return {theAmount, theFlags, anOwner, theDamagerProjectile};
}

Damage Damage::FromNowhere(int theAmount, unsigned int theFlags)
{
	return {theAmount, theFlags, nullptr, nullptr};
}