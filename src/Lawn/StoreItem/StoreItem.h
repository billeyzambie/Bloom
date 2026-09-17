#pragma once

#include "../../BloomLib/Bloom.h"
#include "StoreItemType.h"

//Subclassing will come later
class BLOOM_API StoreItem final
{
  public:
	typedef StoreItemType Type;
	template <class T> using TypeT = StoreItemType;

	const StoreItemType *mType;
	int mPurchases = 0;
	int mTotalPurchasesEver = 0;
	int mLastPurchaseTime = 0;
	StoreItem(const StoreItemType &theType);
	StoreItem();
	//virtual ~StoreItem() = default;
	void AddPurchases(int theAmount);
};