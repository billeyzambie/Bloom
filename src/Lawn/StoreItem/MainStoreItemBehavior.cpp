#include "MainStoreItemBehavior.h"
#include "../Board.h"
#include "../../LawnApp.h"

MainStoreItemBehavior::MainStoreItemBehavior(const StoreItemBehaviorType &theType)
	: StoreItemBehavior(theType) 
{
}

void MainStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	if (aStoreItem.mPurchases >= mAttributes.mMaxCount)
	{
		aStoreItem.mAttributes.mSoldOut = true;
	}

	if (!theContext.mLawnApp.HasFinishedAdventure() 
		&& theContext.mPlayerInfo.GetLevel() <= mAttributes.mUnlockLevel)
	{
		aStoreItem.mAttributes.mUnavailable = true;
	}
}

void MainStoreItemBehavior::OnPurchase(PurchaseContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	if (aStoreItem.mPurchases >= mAttributes.mMaxCount)
	{
		aStoreItem.mAttributes.mSoldOut = true;
	}
}