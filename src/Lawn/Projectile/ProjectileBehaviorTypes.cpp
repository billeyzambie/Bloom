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

const auto &MAIN = Registries::PROJECTILE_BEHAVIORS.Register<MainProjectileBehavior>([]() {
	auto *aProjectileType = new TypeOf<MainProjectileBehavior>("PVZ", "MAIN");
	return aProjectileType;
});

const auto &APPLY_BUTTER = Registries::PROJECTILE_BEHAVIORS.Register<ApplyButterProjectileBehavior>([]() {
	auto *aProjectileType = new TypeOf<ApplyButterProjectileBehavior>("PVZ", "APPLY_BUTTER");
	return aProjectileType;
});

const auto &MELON_SPLASH = Registries::PROJECTILE_BEHAVIORS.Register<SplashProjectileBehavior>([]() {
	ProjectileBehaviorAttributes anAttributes;
	anAttributes.mAbilityWidth = 60;
	anAttributes.mAbilityHeight = 3;
	anAttributes.mAbilityMax = 7;
	anAttributes.mAbilityIntensity = 0.33f;

	auto *aProjectileType = new TypeOf<SplashProjectileBehavior>("PVZ", "MELON_SPLASH", anAttributes);
	return aProjectileType;
});

const auto &FIRE = Registries::PROJECTILE_BEHAVIORS.Register<FireProjectileBehavior>([]() {
	ProjectileBehaviorAttributes anAttributes;
	anAttributes.mAbilityWidth = 100;
	anAttributes.mAbilityHeight = 1;
	anAttributes.mAbilityMax = 1;
	anAttributes.mAbilityIntensity = 0.33f;

	auto *aProjectileType = new TypeOf<FireProjectileBehavior>("PVZ", "FIRE", anAttributes);
	return aProjectileType;
});

const auto &HOMING = Registries::PROJECTILE_BEHAVIORS.Register<HomingProjectileBehavior>([]() {
	ProjectileBehaviorAttributes anAttributes;
	anAttributes.mAbilityMax = 1;
	anAttributes.mAbilityIntensity = 2.0f;

	auto *aProjectileType = new TypeOf<HomingProjectileBehavior>("PVZ", "HOMING", anAttributes);
	return aProjectileType;
});

const auto &TEST = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	auto *aProjectileType = new TypeOf<TestBehavior>("PVZ", "TEST");
	return aProjectileType;
});

} // namespace ProjectileBehaviorTypes