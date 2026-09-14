#include "FireProjectileBehavior.h"
#include "../Lawn/Zombie.h"

FireProjectileBehavior::FireProjectileBehavior(const ProjectileBehaviorType &theType)
	: SplashProjectileBehavior(theType)
{
}

bool FireProjectileBehavior::IsSplashDamage(Projectile &theProjectile, Zombie &theCentralTarget)
{
	if (theCentralTarget.IsFireResistant())
		return false;
	return SplashProjectileBehavior::IsSplashDamage(theProjectile, theCentralTarget);
}

bool FireProjectileBehavior::IsZombieHitBySplash(Projectile &theProjectile, Zombie &theTarget)
{
	if (theTarget.IsFireResistant())
		return false;
	return SplashProjectileBehavior::IsZombieHitBySplash(theProjectile, theTarget);
}

void FireProjectileBehavior::DoSplashDamage(Projectile &theProjectile, Zombie &theTarget)
{
	theTarget.RemoveColdEffects();
	SplashProjectileBehavior::DoSplashDamage(theProjectile, theTarget);
}