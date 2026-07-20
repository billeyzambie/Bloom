#include "StoreItemGroup.h"
#include "../LawnApp.h"
#include "../System/PlayerInfo.h"

StoreItemGroup::StoreItemGroup(
	std::string theModName, std::string theTypeName,
	const StoreItemGroupAttributes &theAttributes
) 
	: BloomType(std::move(theModName), std::move(theTypeName)),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
	mModifiers.Add([](StoreItemGroupModifierContext &theContext) {
		if (!theContext.mLawnApp.HasFinishedAdventure() &&
			theContext.mPlayerInfo.GetLevel() <= theContext.mAttributes.mUnlockLevel)
		{
			theContext.mAttributes.mUnavailable = true;
		}
	});
}

void StoreItemGroup::CopyFrom(const StoreItemGroup &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
	mModifiers = theOther.mModifiers;
	mInsertion = theOther.mInsertion;
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