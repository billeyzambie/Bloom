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
	template <ValidInstanceClass T> using TypeT = ProjectileBehaviorTypeT<T>;
	typedef Projectile Owner;

	struct DoImpactContext
	{
		Projectile &mProjectile;
		//Custom projectiles are currently always allied to plants,
		//they'll be able to be allied to zombies when the advanced team API comes out
		Zombie *mTargetZombie;
		bool mShouldDie = true;
		bool mCanceled = false;
	};

	const ProjectileBehaviorType &mType;
	ProjectileBehaviorAttributes mAttributes;
	int mRunTime = 0;

	ProjectileBehavior(const ProjectileBehaviorType &theType);
	virtual ~ProjectileBehavior() = default;

	virtual void DoImpact(DoImpactContext &theContext);

	void Update(Projectile &theProjectile);

  protected:
	virtual void VirtualUpdate(Projectile &theProjectile);
};