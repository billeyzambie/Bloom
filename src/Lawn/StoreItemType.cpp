#include "StoreItemType.h"
#include "../Sexy.TodLib/TodDebug.h"

StoreItemType::StoreItemType(
	std::string theModName, std::string theTypeName,
	const StoreItemAttributes &theAttributes
) 
	: BloomType(std::move(theModName), std::move(theTypeName)),
	mAttributeBaseValues(theAttributes),
	mAttributes(theAttributes)
{
}

StoreItemType::operator OldStoreItemType() const
{
	return (OldStoreItemType)GetNumericalId();
}

void StoreItemType::CopyFrom(const BloomType &theOther)
{
	TOD_ASSERT(
		dynamic_cast<const StoreItemType *>(&theOther),
		"theOther must be a StoreItemType"
	);

	auto &anOther = static_cast<const StoreItemType &>(theOther);

	mAttributes = anOther.mAttributes;
}
