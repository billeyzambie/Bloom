#include "StoreItemModifiers.h"

namespace StoreItemModifiers
{

void ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure())
		theContext.mAttributes.mComingSoon = true;
}

void OnPurchaseSetPurchasesToCurrentTime(StoreItemPurchaseContext& theContext)
{
	theContext.mStoreItemData.mPurchases = time(nullptr);
}

} // namespace StoreItemModifiers
