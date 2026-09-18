#pragma once

#include "ProjectileBehavior.h"

class BLOOM_API MainProjectileBehavior : public ProjectileBehavior
{
  public:
	MainProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual void VirtualUpdate(Projectile &theProjectile) override;
	virtual void DoImpact(DoImpactContext &theImpactContext) override;
};