#pragma once

#include "ProjectileBehavior.h"

class BLOOM_API SplashProjectileBehavior : public ProjectileBehavior
{
  public:
	SplashProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual void DoImpact(DoImpactContext &theContext) override;
	virtual bool IsSplashDamage(Projectile &theProjectile, Zombie &theCentralTarget);
	virtual bool IsZombieHitBySplash(Projectile &theProjectile, Zombie &theTarget);
	virtual void DoSplashDamage(Projectile &theProjectile, Zombie &theTarget);
};