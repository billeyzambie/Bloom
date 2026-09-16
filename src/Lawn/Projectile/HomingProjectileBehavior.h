#pragma once

#include "ProjectileBehavior.h"

class BLOOM_API HomingProjectileBehavior : public ProjectileBehavior
{
  public:
	ZombieID mTargetZombieId = ZombieID::ZOMBIEID_NULL;
	int mNumberOfTimesFoundNewTarget = 0;
	HomingProjectileBehavior(const ProjectileBehaviorType &theType);
	void DoImpact(DoImpactContext &theContext) override;
	void VirtualUpdate(Projectile &theProjectile) override;
};