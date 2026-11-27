#include "TreeOfWisdomShowDialogStoreItemBehavior.h"
#include "../../../LawnApp.h"
#include "../../System/PlayerInfo.h"
#include "../../Widget/StoreScreen.h"
#include "../../Widget/LawnDialog.h"
#include "../../Widget/GameButton.h"

void TreeOfWisdomShowDialogStoreItemBehavior::OnPurchase(PurchaseContext &theContext)
{
	StoreItem &aStoreItem = theContext.mStoreItem;
	theContext.mApp.mPlayerInfo->mChallengeRecords[GAMEMODE_TREE_OF_WISDOM] = 1;
	auto *aStoreScreen = theContext.mStoreScreen;
	if (aStoreScreen)
	{
		LawnDialog *aDialog = (LawnDialog *)aStoreScreen->mApp->DoDialog(
			DIALOG_STORE_PURCHASE, true, "[VISIT_TREE_HEADER]", "[VISIT_TREE_BODY]", "", Dialog::BUTTONS_YES_NO);
		aDialog->mLawnYesButton->SetLabel("[DIALOG_BUTTON_YES]");
		aDialog->mLawnNoButton->SetLabel("[DIALOG_BUTTON_NO]");

		aStoreScreen->mWaitForDialog = true;
		int aResult = aDialog->WaitForResult(true);
		aStoreScreen->mWaitForDialog = false;

		if (aResult == Dialog::ID_OK)
		{
			aStoreScreen->mGoToTreeNow = true;
			aStoreScreen->mResult = aResult;
		}
	}
}