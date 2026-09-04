#pragma once

#include "../../BloomLib/Bloom.h"
#include "ProjectileBehaviorType.h"
#include "../../ConstEnums.h"

class Projectile;
class Zombie;

class BLOOM_API ProjectileBehavior
{
  public:
	typedef ProjectileBehaviorType Type;
	typedef Projectile Owner;

	struct DoImpactContext
	{
		Projectile &mProjectile;
		Zombie *mZombie;
	};

	const ProjectileBehaviorType &mType;
	ProjectileBehaviorAttributes mAttributes;
	int mRunTime = 0;

	ProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual ~ProjectileBehavior() = default;

	virtual void DoImpact(DoImpactContext &theProjectile);

	void Update(Projectile &theProjectile);
  protected:
	virtual void VirtualUpdate(Projectile &theProjectile);
};