#include "StoreItemType.h"
#include "../Sexy.TodLib/TodDebug.h"
#include "../LawnApp.h";

StoreItemType::StoreItemType(
	std::string theModName, std::string theTypeName,
	const StoreItemAttributes &theAttributes
) 
	: BloomType(std::move(theModName), std::move(theTypeName)),
	mAttributeBaseValues(theAttributes)
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

	mAttributeBaseValues = anOther.mAttributeBaseValues;
	mModifiers = anOther.mModifiers;
}

int StoreItemType::GetCost() const
{
	return mAttributes.mCost;
}

void StoreItemType::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;

	StoreItemModifierContext aContext{*this, theLawnApp, *theLawnApp.mPlayerInfo, mAttributes};
	for (auto &anElement : mModifiers)
	{
		anElement.mTransformer(aContext);
	}
}
