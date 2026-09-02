#include "ProjectileBehaviorTypes.h"
#include "ProjectileBehaviorType.h"
#include "../Registries.h"

#include "../Board.h"
#include "../Zombie.h"
#include "Projectile.h"
#include "ProjectileBehavior.h"

class TestProjectileBehavior : public ProjectileBehavior
{
	int mCounter = 0;
	TestProjectileBehavior(const ProjectileBehaviorType &theType) 
		: ProjectileBehavior(theType) {};
	virtual void Update(Projectile &theProjectile) override
	{
	}
	virtual void DoImpact(Projectile &theProjectile, Zombie &theZombie) override
	{
	}
};

namespace ProjectileBehaviorTypes
{

const auto &NOTHING = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType = new ProjectileBehaviorType("PVZ", "NOTHING");
	return aProjectileType;
});

const auto &TEST = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType = new ProjectileBehaviorType("PVZ", "TEST");
	return aProjectileType;
});

}