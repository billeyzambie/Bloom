#pragma once

#include "StoreItemType.h"
#include "../LawnApp.h"
#include "../System/PlayerInfo.h"

namespace StoreItemModifiers
{

BLOOM_API void ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext);
BLOOM_API void OnPurchaseSetPurchasesToCurrentTime(StoreItemPurchaseContext &theContext);

} // namespace StoreItemModifiers
