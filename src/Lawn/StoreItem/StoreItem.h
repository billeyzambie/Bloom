#pragma once

#include "../../BloomLib/Bloom.h"

class StoreItemType;

//Subclassing will come later
class BLOOM_API StoreItem final
{
  public:
	const StoreItemType *mType;
	int mPurchases = 0;
	int mTotalPurchasesEver = 0;
	int mLastPurchaseTime = 0;
	StoreItem(const StoreItemType &theType);
	StoreItem();
	//virtual ~StoreItem() = default;
	void AddPurchases(int theAmount);
};