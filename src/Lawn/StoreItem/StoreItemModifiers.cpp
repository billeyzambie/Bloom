#include "StoreItemModifiers.h"

namespace StoreItemModifiers
{

void SoldOutAfterOnePurchase(StoreItemModifierContext &theContext)
{
	return SoldOutAfterPurchases<1>(theContext);
}

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
	theContext.mPurchases = time(nullptr);
}

} // namespace StoreItemModifiers
