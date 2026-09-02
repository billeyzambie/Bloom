#pragma once

#include "../../BloomLib/Bloom.h"

class ProjectileBehaviorType;
class Projectile;
class Zombie;

class BLOOM_API ProjectileBehavior
{
  public:
	typedef ProjectileBehaviorType Type;
	const ProjectileBehaviorType &mType;
	ProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual ~ProjectileBehavior() = default;
	virtual void Update(Projectile &theProjectile);
	virtual void DoImpact(Projectile &theProjectile, Zombie &theZombie);
};