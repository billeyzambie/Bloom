#pragma once

#include "../../BloomLib/BehaviorList.h"
#include "StoreItemType.h"
#include "StoreItemBehavior.h"

namespace Sexy
{
class Image;
class Graphics;
}

class BLOOM_API StoreItem final
{
  public:
	typedef StoreItemType Type;
	typedef Type RegistryType;
	template <class T> using TypeT = Type;

	const StoreItemType &mType;
	BehaviorList<StoreItemBehavior> mBehaviors;
	StoreItemAttributes mAttributes;
	int mPurchases = 0;
	int mTotalPurchasesEver = 0;
	int mLastPurchaseTime = 0;
	StoreItem(const StoreItemType &theType);
	void AddPurchases(int theAmount);
	Sexy::Image *GetIcon() const;
	void Update(const LawnApp &theLawnApp);
	void Draw(
		StoreScreen *theStoreScreen, 
		Sexy::Graphics *g, 
		int thePosX, 
		int thePosY,
		bool theIsForHighlight
	);
};