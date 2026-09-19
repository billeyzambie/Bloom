#pragma once

#include "ProjectileBehavior.h"

class BLOOM_API TestProjectileBehavior : public ProjectileBehavior
{
  public:
	ZombieID mLastHitZombie = ZombieID::ZOMBIEID_NULL;
	TestProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual void VirtualUpdate(Projectile &theProjectile) override;
	virtual void DoImpact(DoImpactContext &theContext) override;
};