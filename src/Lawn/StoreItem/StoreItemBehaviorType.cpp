#include "StoreItemBehaviorType.h"

StoreItemBehaviorType::StoreItemBehaviorType(
	const std::string &theModName, 
	const std::string &theTypeName,
	const StoreItemBehaviorAttributes &theAttributes
)
	: BloomType(theModName, theTypeName),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
}

void StoreItemBehaviorType::CopyFrom(const StoreItemBehaviorType &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
}

void StoreItemBehaviorType::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;
	//goofy
}