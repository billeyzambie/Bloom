#include "StoreItem.h"

StoreItem::StoreItem(const StoreItemType &theType) : mType(&theType)
{
}

StoreItem::StoreItem() : mType(nullptr)
{
}

void StoreItem::AddPurchases(int theCount)
{
	mPurchases += theCount;
	mTotalPurchasesEver += theCount;
}