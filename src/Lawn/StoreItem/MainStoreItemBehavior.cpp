#include "MainStoreItemBehavior.h"
#include "../Board.h"
#include "../../LawnApp.h"
#include "../SexyAppFramework/Graphics.h"

void MainStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	if (aStoreItem.mPurchases >= aStoreItem.mAttributes.mMaxBuyCount)
	{
		aStoreItem.mAttributes.mSoldOut = true;
	}

	if (!theContext.mLawnApp.HasFinishedAdventure() 
		&& theContext.mPlayerInfo.GetLevel() <= aStoreItem.mAttributes.mUnlockLevel)
	{
		aStoreItem.mAttributes.mUnavailable = true;
	}
}


void MainStoreItemBehavior::Draw(DrawContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	Sexy::Graphics *g = &theContext.mGraphics;

	Sexy::Image *anIcon = aStoreItem.GetIcon();

	if (anIcon)
		g->DrawImage(
			anIcon,
			theContext.mPosX + aStoreItem.mAttributes.mDrawOffsetX,
			theContext.mPosY + aStoreItem.mAttributes.mDrawOffsetY
		);
	
	int aCount = aStoreItem.mAttributes.mBuyCount;

	if (aCount != 1)
	{
		std::string aCountLabel = "x";
		aCountLabel += std::to_string(aCount);
		TodDrawString(g, aCountLabel, theContext.mPosX + 56, theContext.mPosY + 62, Sexy::FONT_HOUSEOFTERROR16, Color::White, DS_ALIGN_RIGHT);
	}
}

void MainStoreItemBehavior::OnPurchase(PurchaseContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	if (aStoreItem.mPurchases >= aStoreItem.mAttributes.mMaxBuyCount)
	{
		aStoreItem.mAttributes.mSoldOut = true;
	}
}