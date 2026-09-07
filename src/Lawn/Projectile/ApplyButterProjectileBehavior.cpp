#include "ApplyButterProjectileBehavior.h"
#include "../Zombie.h"

ApplyButterProjectileBehavior::ApplyButterProjectileBehavior(const ProjectileBehaviorType &theType) 
	: ProjectileBehavior(theType)
{
}

void ApplyButterProjectileBehavior::DoImpact(DoImpactContext &theContext)
{
	if (theContext.mTargetZombie)
	{
		theContext.mTargetZombie->ApplyButter();
	}
}