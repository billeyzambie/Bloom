#include "ProjectileBehavior.h"

ProjectileBehavior::ProjectileBehavior(const ProjectileBehaviorType &theType) 
	: mType(theType)
{
}

void ProjectileBehavior::Update(Projectile &theProjectile)
{
}

void ProjectileBehavior::DoImpact(Projectile &theProjectile, Zombie &theZombie)
{
}
