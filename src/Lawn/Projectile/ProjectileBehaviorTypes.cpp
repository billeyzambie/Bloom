#include "ProjectileBehaviorTypes.h"
#include "ProjectileBehaviorType.h"
#include "../Registries.h"

#include "../Board.h"
#include "../../LawnApp.h"
#include "../Zombie.h"
#include "Projectile.h"
#include "ProjectileBehavior.h"
#include "ApplyButterProjectileBehavior.h"
#include "MainProjectileBehavior.h"
#include "SplashProjectileBehavior.h"
#include "FireProjectileBehavior.h"
#include "HomingProjectileBehavior.h"

class TestBehavior : public ProjectileBehavior
{
  public:
	ZombieID mLastHitZombie = ZombieID::ZOMBIEID_NULL;
	TestBehavior(const ProjectileBehaviorType &theType)
		: ProjectileBehavior(theType) {};
	virtual void VirtualUpdate(Projectile &theProjectile) override
	{
		theProjectile.mVelY = -sin(mRunTime / 5.0f) * 2;
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

const auto &MAIN = RegisterTypeOf<MainProjectileBehavior>(
	"PVZ", "MAIN",
	{}
);

const auto &APPLY_BUTTER = RegisterTypeOf<ApplyButterProjectileBehavior>(
	"PVZ", "APPLY_BUTTER",
	{}
);	

const auto &MELON_SPLASH = RegisterTypeOf<SplashProjectileBehavior>(
	"PVZ", "MELON_SPLASH",
	{
		.mAbilityWidth = 60,
		.mAbilityHeight = 3,
		.mAbilityMax = 7,
		.mAbilityIntensity = 0.33f
	}
);

const auto &FIRE = RegisterTypeOf<FireProjectileBehavior>(
	"PVZ", "FIRE",
	{
		.mAbilityWidth = 100,
		.mAbilityHeight = 1,
		.mAbilityMax = 1,
		.mAbilityIntensity = 0.33f
	}
);

const auto &HOMING = RegisterTypeOf<HomingProjectileBehavior>(
	"PVZ", "HOMING",
	{
		.mAbilityMax = 1,
		.mAbilityIntensity = 2.0f
	}
);

const auto &TEST = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	auto *aProjectileType = new TypeOf<TestBehavior>("PVZ", "TEST");
	return aProjectileType;
});

} // namespace ProjectileBehaviorTypes