#include "StoreItem.h"

StoreItem::StoreItem(const StoreItemType &theType) : mType(theType)
{
	mBehaviors.Initialize(mType);
}

void StoreItem::AddPurchases(int theCount)
{
	mPurchases += theCount;
	mTotalPurchasesEver += theCount;
}