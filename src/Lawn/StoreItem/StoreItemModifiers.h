#pragma once

#include "StoreItemType.h"
#include "../LawnApp.h"
#include "../System/PlayerInfo.h"

namespace StoreItemModifiers
{

template <int theLevel> void UnavailableBelowLevel(StoreItemModifierContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure() && theContext.mPlayerInfo.GetLevel() < theLevel)
		theContext.mAttributes.mUnavailable = true;
}

BLOOM_API void ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext);
BLOOM_API void UnavailableUntilAdventureFinished(StoreItemModifierContext &theContext);

BLOOM_API void OnPurchaseSetPurchasesToCurrentTime(StoreItemPurchaseContext &theContext);

} // namespace StoreItemModifiers
