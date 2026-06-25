#include "StoreItemType.h"
#include "../Sexy.TodLib/TodDebug.h"

StoreItemType::StoreItemType(std::string theModName, std::string theTypeName) 
	: BloomType(std::move(theModName), std::move(theTypeName))
{
}

StoreItemType::operator OldStoreItem()
{
	return (OldStoreItem)GetNumericalId();
}

void StoreItemType::CopyFrom(const BloomType &theOther)
{
	TOD_ASSERT(
		dynamic_cast<const StoreItemType *>(&theOther),
		"theOther must be a StoreItemType"
	);

	auto &anOther = static_cast<const StoreItemType &>(theOther);

	mCost = anOther.mCost;
}
