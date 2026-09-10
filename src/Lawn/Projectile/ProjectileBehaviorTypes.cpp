#include "ProjectileBehaviorTypes.h"
#include "ProjectileBehaviorType.h"
#include "../Registries.h"

#include "../Board.h"
#include "../../LawnApp.h"
#include "../Zombie.h"
#include "Projectile.h"
#include "ProjectileBehavior.h"
#include "ApplyButterProjectileBehavior.h"
#include "DefaultProjectileBehavior.h"

class TestBehavior : public ProjectileBehavior
{
  public:
	ZombieID mLastHitZombie = ZombieID::ZOMBIEID_NULL;
	TestBehavior(const ProjectileBehaviorType &theType)
		: ProjectileBehavior(theType) {};
	virtual void VirtualUpdate(Projectile &theProjectile) override
	{
		//theProjectile.mVelY = -sin(mRunTime / 10.0f) * 4;
	}
	virtual void DoImpact(DoImpactContext &theContext) override
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
};

namespace ProjectileBehaviorTypes
{

const auto &DEFAULT = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType 
		= new CustomProjectileBehaviorType<DefaultProjectileBehavior>("PVZ", "DEFAULT");
	return aProjectileType;
});

const auto &TEST = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType 
		= new CustomProjectileBehaviorType<TestBehavior>("PVZ", "TEST");
	return aProjectileType;
});

const auto &APPLY_BUTTER = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType =
		new CustomProjectileBehaviorType<ApplyButterProjectileBehavior>("PVZ", "APPLY_BUTTER");
	return aProjectileType;
});

} // namespace ProjectileBehaviorTypes