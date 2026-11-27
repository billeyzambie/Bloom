#include "PacketUpgradeStoreItemBehavior.h"
#include "../../../LawnApp.h"
#include "../../System/PlayerInfo.h"
#include "../../Widget/StoreScreen.h"
#include "../../Widget/LawnDialog.h"
#include "../../Widget/GameButton.h"
#include "../../Board.h"
#include "../../../Sexy.TodLib/TodStringFile.h"
#include "../../Seed/SeedPacket.h"

void PacketUpgradeStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	int aPurchase = aStoreItem.mPurchases;
	int aTargetPrice = aPurchase == 0 ? 75 : aPurchase == 1 ? 500 : aPurchase == 2 ? 2000 : 8000;
	aStoreItem.mAttributes.mCost *= aTargetPrice / 75.0f;
}

void PacketUpgradeStoreItemBehavior::OnPurchase(PurchaseContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	LawnApp &anApp = *theContext.mStoreScreen->mApp;

	auto *aStoreScreen = theContext.mStoreScreen;
	if (aStoreScreen)
	{
		SexyString aDialogLines = StrFormat(TodStringTranslate("[NOW_YOU_CAN_CHOOSE_X_SEEDS]").c_str(),
											6 + aStoreItem.mPurchases);
		Dialog *aDialog = anApp.DoDialog(DIALOG_UPGRADED, true, "[MORE_SLOTS]", aDialogLines, "[DIALOG_BUTTON_OK]",
										 Dialog::BUTTONS_FOOTER);

		aStoreScreen->mWaitForDialog = true;
		aDialog->WaitForResult(true);
		aStoreScreen->mWaitForDialog = false;
	}

	if (anApp.mBoard)
	{
		anApp.mBoard->mSeedBank->UpdateWidth();
	}
}