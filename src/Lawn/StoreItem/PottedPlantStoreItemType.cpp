#include "PottedPlantStoreItemType.h"
#include "../SexyAppFramework/Graphics.h"
#include "../Resources.h"
#include "../LawnApp.h"
#include "../Widget/StoreScreen.h"
#include "../Sexy.TodLib/TodStringFile.h"
#include "../ZenGarden.h"
#include "../LawnCommon.h"
#include "../System/PlayerInfo.h"
#include "StoreItemModifiers.h"

void PottedPlantSoldOut(StoreItemModifierContext &theContext)
{
	if (theContext.mLawnApp.mZenGarden->IsZenGardenFull(true) ||
		theContext.mPlayerInfo.GetStoreItemData(theContext.mStoreItemType).mPurchases == GetCurrentDaysSince2000())
		theContext.mAttributes.mSoldOut = true;
}

PottedPlantStoreItemType::PottedPlantStoreItemType(std::string theModName, std::string theTypeName,
										  const StoreItemAttributes &theAttributes)
	: StoreItemType(std::move(theModName), std::move(theTypeName), theAttributes)
{
	mModifiers.Add(StoreItemModifiers::ComingSoonUntilAdventureFinished);
	mModifiers.Add(PottedPlantSoldOut);
	mOnPurchase.Add([](StoreItemPurchaseContext &theContext) {
		auto *aStoreScreen = theContext.mStoreScreen;
		if (aStoreScreen)
		{
			theContext.mApp.mZenGarden->AddPottedPlant(&aStoreScreen->mPottedPlantSpecs);
			aStoreScreen->mPottedPlantSpecs.InitializePottedPlant(SEED_MARIGOLD);
			aStoreScreen->mPottedPlantSpecs.mDrawVariation =
				(DrawVariation)RandRangeInt(VARIATION_MARIGOLD_WHITE, VARIATION_MARIGOLD_LIGHT_GREEN);
			theContext.mStoreItemData.mPurchases = GetCurrentDaysSince2000();
		}
	});
}

void PottedPlantStoreItemType::Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
								   bool theIsForHighlight) const
{
	if (theStoreScreen)
		theStoreScreen->mApp->mZenGarden->DrawPottedPlantIcon(g, thePosX, thePosY, &theStoreScreen->mPottedPlantSpecs);
	StoreItemType::Draw(theStoreScreen, g, thePosX, thePosY, theIsForHighlight);
}
