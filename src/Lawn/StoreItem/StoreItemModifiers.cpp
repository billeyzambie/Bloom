#include "StoreItemModifiers.h"

namespace StoreItemModifiers
{

void ComingSoonUntilAdventureFinished(StoreItemModifierContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure())
		theContext.mAttributes.mComingSoon = true;
}

void UnavailableUntilAdventureFinished(StoreItemModifierContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure())
		theContext.mAttributes.mUnavailable = true;
}

void OnPurchaseSetPurchasesToCurrentTime(StoreItemPurchaseContext& theContext)
{
	theContext.mStoreItemData.mPurchases = time(nullptr);
}

} // namespace StoreItemModifiers
