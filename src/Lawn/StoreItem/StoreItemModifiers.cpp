#include "StoreItemModifiers.h"

namespace StoreItemModifiers
{

void ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext)
{
}

void OnPurchaseSetPurchasesToCurrentTime(StoreItemPurchaseContext& theContext)
{
	theContext.mStoreItemData.mPurchases = time(nullptr);
}

} // namespace StoreItemModifiers
