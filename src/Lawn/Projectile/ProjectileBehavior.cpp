#include "ProjectileBehavior.h"
#include "../../SexyAppFramework/Common.h"

ProjectileBehavior::ProjectileBehavior(const ProjectileBehaviorType &theType) 
	: mType(theType), mAttributes(mType.mAttributes)
{
}

void ProjectileBehavior::Update(Projectile &theProjectile)
{
	int aNumOfTimesToUpdate = std::floor(mAttributes.mUpdateRateMultiplier);
	if (Sexy::Rand(1.0f) < mAttributes.mUpdateRateMultiplier - aNumOfTimesToUpdate)
		aNumOfTimesToUpdate++;

	mAttributes = mType.mAttributes;

	for (int i = 0; i < aNumOfTimesToUpdate; i++)
		VirtualUpdate(theProjectile);

	mRunTime += aNumOfTimesToUpdate;
}

void ProjectileBehavior::VirtualUpdate(Projectile &theProjectile)
{
}

void ProjectileBehavior::DoImpact(DoImpactContext &theProjectile)
{
}
