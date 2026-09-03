#include "ProjectileBehaviorTypes.h"
#include "ProjectileBehaviorType.h"
#include "../Registries.h"

#include "../Board.h"
#include "../../LawnApp.h"
#include "../Zombie.h"
#include "../../Sexy.TodLib/TodFoley.h"
#include "Projectile.h"
#include "ProjectileBehavior.h"

class TestBehavior : public ProjectileBehavior
{
  public:
	int mCounter = 0;
	TestBehavior(const ProjectileBehaviorType &theType)
		: ProjectileBehavior(theType) {};
	virtual void Update(Projectile &theProjectile) override
	{
	}
	virtual void DoImpact(Projectile &theProjectile, Zombie &theZombie) override
	{
		theZombie.StartMindControlled();
	}
};

namespace ProjectileBehaviorTypes
{

const auto &NOTHING = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType = new ProjectileBehaviorType("PVZ", "NOTHING");
	return aProjectileType;
});

const auto &TEST = Registries::PROJECTILE_BEHAVIORS.Register([]() {
	ProjectileBehaviorType *aProjectileType 
		= new CustomProjectileBehaviorType<TestBehavior>("PVZ", "TEST");
	return aProjectileType;
});

}