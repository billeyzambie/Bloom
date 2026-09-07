#include "ProjectileBehaviorTypes.h"
#include "ProjectileBehaviorType.h"
#include "../Registries.h"

#include "../Board.h"
#include "../../LawnApp.h"
#include "../Zombie.h"
#include "Projectile.h"
#include "ProjectileBehavior.h"
#include "ApplyButterProjectileBehavior.h"

class TestBehavior : public ProjectileBehavior
{
  public:
	TestBehavior(const ProjectileBehaviorType &theType)
		: ProjectileBehavior(theType) {};
	virtual void VirtualUpdate(Projectile &theProjectile) override
	{
		theProjectile.mVelY = -sin(mRunTime / 10.0f) * 4;
	}
	virtual void DoImpact(DoImpactContext &theProjectile) override
	{
	}
};

namespace ProjectileBehaviorTypes
{

const auto &DEFAULT = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType 
		= new CustomProjectileBehaviorType<ProjectileBehavior>("PVZ", "DEFAULT");
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