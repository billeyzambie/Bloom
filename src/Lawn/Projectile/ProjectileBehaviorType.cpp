#include "ProjectileBehaviorType.h"
#include "ProjectileBehavior.h"

ProjectileBehaviorType::ProjectileBehaviorType(
	const std::string &theModName, 
	const std::string &theTypeName,
	const ProjectileBehaviorAttributes &theAttributes
)
	: BloomType(theModName, theTypeName),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
}

void ProjectileBehaviorType::CopyFrom(const ProjectileBehaviorType &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
}

void ProjectileBehaviorType::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;
	//goofy
}

ProjectileBehavior *ProjectileBehaviorType::Instantiate(void *theBuffer) const
{
	return InstantiateClass<ProjectileBehavior>(theBuffer);
}