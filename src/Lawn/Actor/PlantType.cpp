#include "PlantType.h"
#include "Plant.h"
#include "../Sexy.TodLib/TodDebug.h"

PlantType::PlantType(
	const std::string &theModName,
	const std::string &theTypeName,
	const Attributes &theAttributes
)
	: BloomType(theModName, theTypeName),
	mAttributes(theAttributes)
{
}

PlantType::operator SeedType() const
{
	int aNumId = GetNumericalId();
	TOD_ASSERT(aNumId < SeedType::NUM_SEED_TYPES, "Unhandled modded PlantType");
	return (SeedType)aNumId;
}

void PlantType::CopyFrom(const PlantType &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
}

void PlantType::Update()
{
	//goofy
	mAttributes = mAttributeBaseValues;
}

Plant *PlantType::Instantiate(void *theBuffer) const
{
	return new (theBuffer) Plant(*this);
}

Plant *PlantType::MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const
{
	return new (theDestinationBuffer) Plant(std::move(*reinterpret_cast<Plant*>(theSourceBuffer)));
}