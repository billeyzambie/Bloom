#pragma once

#include "SplashProjectileBehavior.h"

class BLOOM_API FireProjectileBehavior : public SplashProjectileBehavior
{
	FireProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual bool IsSplashDamage(Projectile &theProjectile, Zombie &theCentralTarget) override;
	virtual bool IsZombieHitBySplash(Projectile &theProjectile, Zombie &theTarget) override;
	virtual void DoSplashDamage(Projectile &theProjectile, Zombie &theTarget) override;
};