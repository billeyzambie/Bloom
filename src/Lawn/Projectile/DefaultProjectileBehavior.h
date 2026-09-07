#pragma once

#include "ProjectileBehavior.h"

class BLOOM_API DefaultProjectileBehavior : public ProjectileBehavior
{
  public:
	DefaultProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual void VirtualUpdate(Projectile &theProjectile) override;
	virtual void DoImpact(DoImpactContext &theImpactContext) override;
};