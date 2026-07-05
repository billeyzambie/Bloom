#pragma once

class StoreItemType;

class StoreItem
{
  public:
	const StoreItemType *mType;
	int mPurchases = 0;
	int mLastPurchaseTime = 0;
	bool mEverPurchased = false;
	StoreItem(const StoreItemType &theType);
	virtual ~StoreItem() = default;
};