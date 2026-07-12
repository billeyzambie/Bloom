#include "StoreItem.h"

StoreItem::StoreItem(const StoreItemType &theType) : mType(&theType)
{
}

void StoreItem::AddPurchases(int theCount)
{
	mPurchases += theCount;
	mTotalPurchasesEver += theCount;
}