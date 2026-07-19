#include "StoreItemGroup.h"
#include "../LawnApp.h"


StoreItemGroup::StoreItemGroup(
	std::string theModName, std::string theTypeName,
	const StoreItemGroupAttributes &theAttributes
) 
	: BloomType(std::move(theModName), std::move(theTypeName)),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
	//TODO: add unlock level modifier
}

void StoreItemGroup::CopyFrom(const StoreItemGroup &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
	mModifiers = theOther.mModifiers;
	mSort = theOther.mSort;
}

bool StoreItemGroup::ExcludeFromSorting() const
{
	return mAttributes.mUnavailable;
}

void StoreItemGroup::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;

	StoreItemGroupModifierContext aContext{*this, theLawnApp, *theLawnApp.mPlayerInfo, mAttributes};

	mModifiers.Fire(aContext);
}