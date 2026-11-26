#include "PottedPlantStoreItemBehavior.h"
#include "../Board.h"
#include "../ZenGarden.h"
#include "../Widget/StoreScreen.h"
#include "../Actor/PlantTypes.h"
#include "../../LawnApp.h"
#include "../SexyAppFramework/Graphics.h"

PottedPlantStoreItemBehavior::PottedPlantStoreItemBehavior(const StoreItemBehaviorType &theType)
	: StoreItemBehavior(theType), mPottedPlant(std::make_unique<PottedPlant>())
{
	InitializePottedPlant();
}

void PottedPlantStoreItemBehavior::InitializePottedPlant()
{
	const Type &aType = static_cast<const Type &>(mType);
	TOD_ASSERT(aType.mPlantType, "PottedPlantStoreItemBehaviorType had null mPlantType");
	mPottedPlant->InitializePottedPlant(*aType.mPlantType);
	if (aType.mPlantType == PlantTypes::MARIGOLD)
		mPottedPlant->mDrawVariation =
			(DrawVariation)RandRangeInt(VARIATION_MARIGOLD_WHITE, VARIATION_MARIGOLD_LIGHT_GREEN);
}

void PottedPlantStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;

	if (theContext.mLawnApp.mZenGarden->IsZenGardenFull(true) ||
		mLastDayBought == GetCurrentDaysSince2000())
		aStoreItem.mAttributes.mSoldOut = true;
}

void PottedPlantStoreItemBehavior::Draw(DrawContext &theContext)
{
	gLawnApp->mZenGarden->DrawPottedPlantIcon(
		&theContext.mGraphics,
		theContext.mPosX,
		theContext.mPosY,
		mPottedPlant.get()
	);
}

void PottedPlantStoreItemBehavior::OnPurchase(PurchaseContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;

	if (theContext.mApp.mZenGarden->IsZenGardenFull(true) ||
		theContext.mApp.mPlayerInfo->GetStoreItemData(aStoreItem.mType).mPurchases == GetCurrentDaysSince2000())
		aStoreItem.mAttributes.mSoldOut = true;
	
	theContext.mApp.mZenGarden->AddPottedPlant(mPottedPlant.get());
	InitializePottedPlant();
	mLastDayBought = GetCurrentDaysSince2000();
}