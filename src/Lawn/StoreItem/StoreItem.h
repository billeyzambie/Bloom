#pragma once

#include "../../BloomLib/Bloom.h"

class StoreItemType;

class BLOOM_API StoreItem
{
  public:
	const StoreItemType *mType;
	int mPurchases = 0;
	int mTotalPurchasesEver = 0;
	int mLastPurchaseTime = 0;
	StoreItem(const StoreItemType &theType);
	virtual ~StoreItem() = default;
	void AddPurchases(int theAmount);
};