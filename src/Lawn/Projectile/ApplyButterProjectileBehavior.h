#pragma once

#include "ProjectileBehavior.h"

class BLOOM_API ApplyButterProjectileBehavior : public ProjectileBehavior
{
  public:
	ApplyButterProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual void DoImpact(DoImpactContext &theContext) override;
};