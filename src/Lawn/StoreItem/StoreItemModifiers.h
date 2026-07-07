#pragma once

#include "StoreItemType.h"
#include "../LawnApp.h"
#include "../System/PlayerInfo.h"

namespace StoreItemModifiers
{

template <int theCount> void SoldOutAfterPurchases(StoreItemModifierContext &theContext)
{
	if (theContext.mStoreItemData.mPurchases >= theCount)
		theContext.mAttributes.mSoldOut = true;
}

template <int theCount> void SoldOutWhenStockpileExceeds(StoreItemModifierContext &theContext)
{
	if (theContext.mStoreItemData.mPurchases - PURCHASE_COUNT_OFFSET > theCount)
		theContext.mAttributes.mSoldOut = true;
}

template <int theLevel> void UnavailableBelowLevel(StoreItemModifierContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure() && theContext.mPlayerInfo.GetLevel() < theLevel)
		theContext.mAttributes.mUnavailable = true;
}

BLOOM_API void SoldOutAfterOnePurchase(StoreItemModifierContext &theContext);
BLOOM_API void ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext);
BLOOM_API void UnavailableUntilAdventureFinished(StoreItemModifierContext &theContext);

template <int theCount> void OnPurchaseSetPurchasesTo(StoreItemPurchaseContext &theContext)
{
	theContext.mStoreItemData.mPurchases = theCount;
}

template <int theCount> void OnPurchaseIncrementPurchasesBy(StoreItemPurchaseContext &theContext)
{
	theContext.mStoreItemData.mPurchases += theCount;
}

template <int theCount> void OnPurchaseIncrementPurchasesByIncludingPurchaseCountOffset(StoreItemPurchaseContext &theContext)
{
	//what on earth even is purchase count offset, something to solve later i guess
	if (theContext.mStoreItemData.mPurchases < PURCHASE_COUNT_OFFSET)
	{
		theContext.mStoreItemData.mPurchases = PURCHASE_COUNT_OFFSET;
	}
	theContext.mStoreItemData.mPurchases += theCount;
}


BLOOM_API void OnPurchaseSetPurchasesToCurrentTime(StoreItemPurchaseContext &theContext);

} // namespace StoreItemModifiers
