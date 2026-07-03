#pragma once

#include "StoreItemType.h"
#include "../LawnApp.h"
#include "../System/PlayerInfo.h"

namespace StoreItemModifiers
{

template <int theCount> void SoldOutAfterPurchases(StoreItemModifierContext &theContext)
{
	if (theContext.mPlayerInfo.mPurchases[theContext.mStoreItemType] >= theCount)
		theContext.mAttributes.mSoldOut = true;
}

template <int theCount> void SoldOutWhenStockpileExceeds(StoreItemModifierContext &theContext)
{
	if (theContext.mPlayerInfo.mPurchases[theContext.mStoreItemType] - PURCHASE_COUNT_OFFSET > theCount)
		theContext.mAttributes.mSoldOut = true;
}

template <int theLevel> void UnavailableBelowLevel(StoreItemModifierContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure() && theContext.mPlayerInfo.GetLevel() < theLevel)
		theContext.mAttributes.mUnavailable = true;
}

void BLOOM_API SoldOutAfterOnePurchase(StoreItemModifierContext &theContext);
void BLOOM_API ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext);
void BLOOM_API UnavailableUntilAdventureFinished(StoreItemModifierContext &theContext);

} // namespace StoreItemModifiers
