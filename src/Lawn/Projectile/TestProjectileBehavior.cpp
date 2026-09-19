#include "TestProjectileBehavior.h"
#include "../Board.h"

TestProjectileBehavior::TestProjectileBehavior(const ProjectileBehaviorType &theType)
	: ProjectileBehavior(theType) 
{
}

void TestProjectileBehavior::VirtualUpdate(Projectile &theProjectile)
{
	theProjectile.mVelY = -sin(mRunTime / 5.0f) * 2;
}

void TestProjectileBehavior::DoImpact(DoImpactContext &theContext)
{
	Zombie *aZombie = theContext.mTargetZombie;
	if (!aZombie)
		return;
	ZombieID aZombieId = theContext.mProjectile.mBoard->ZombieGetID(aZombie);
	if (aZombieId == mLastHitZombie)
	{
		theContext.mCanceled = true;
	}
	mLastHitZombie = aZombieId;
	theContext.mShouldDie = false;
}