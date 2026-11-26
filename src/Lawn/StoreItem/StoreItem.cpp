#include "StoreItem.h"
#include "../../LawnApp.h"
#include "../System/PlayerInfo.h"

StoreItem::StoreItem(const StoreItemType &theType) : mType(theType)
{
	mBehaviors.Initialize(mType);
}

void StoreItem::AddPurchases(int theCount)
{
	mPurchases += theCount;
	mTotalPurchasesEver += theCount;
}

Sexy::Image *StoreItem::GetIcon() const
{
	
	if (mAttributes.mIconOverride)
		return mAttributes.mIconOverride;
	return mType.mBaseIcon;
}

void StoreItem::Update(const LawnApp &theLawnApp)
{
	mAttributes = mType.mAttributes;
	StoreItemBehavior::UpdateContext aContext = {*this, theLawnApp, *theLawnApp.mPlayerInfo};
	mBehaviors.Fire(&StoreItemBehavior::Update, aContext);
}

void StoreItem::Draw(
	StoreScreen *theStoreScreen, 
	Sexy::Graphics *g, 
	int thePosX, 
	int thePosY,
	bool theIsForHighlight
)
{
	StoreItemBehavior::DrawContext aContext = {*this, theStoreScreen, *g, thePosX, thePosY, theIsForHighlight};
	mBehaviors.Fire(&StoreItemBehavior::Draw, aContext);
}