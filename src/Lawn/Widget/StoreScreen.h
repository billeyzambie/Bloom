#ifndef __STORESCREEN_H__
#define __STORESCREEN_H__

#include "../../ConstEnums.h"
#include "../System/PlayerInfo.h"
#include "../../Sexy.TodLib/DataArray.h"
#include "../../SexyAppFramework/Dialog.h"

#include "../StoreItem/StoreItemType.h"

#include "../../BloomLib/InsertionListGroup.h"
#include "../Registries.h"

using namespace Sexy;

#define MAX_PAGE_SPOTS 8
#define MAX_PURCHASES 80

class Coin;
class LawnApp;
class NewLawnButton;

class StoreScreen : public Dialog
{
  private:
	enum
	{
		StoreScreen_Back = 100,
		StoreScreen_Prev = 101,
		StoreScreen_Next = 102
	};

  public:
	LawnApp *mApp;
	NewLawnButton *mBackButton;
	NewLawnButton *mPrevButton;
	NewLawnButton *mNextButton;
	Widget *mOverlayWidget;
	int mStoreTime;
	SexyString mBubbleText;
	int mBubbleCountDown;
	bool mBubbleClickToContinue;
	int mAmbientSpeechCountDown;
	int mPreviousAmbientSpeechIndex;
	int mPage;
	const StoreItemType *mMouseOverItem;
	int mHatchTimer;
	bool mHatchOpen;
	int mShakeX;
	int mShakeY;
	int mStartDialog;
	bool mEasyBuyingCheat;
	bool mWaitForDialog;
	PottedPlant mPottedPlantSpecs;
	DataArray<Coin> mCoins;
	bool mDrawnOnce;
	bool mGoToTreeNow;
	bool mPurchasedFullVersion;
	bool mTrialLockedWhenStoreOpened;
	bool mInCutscene;
	InsertionListGroup<StoreItemGroup, StoreItemType> mStoreItemSpots{Registries::STORE_ITEM_GROUPS,
																	  Registries::STORE_ITEMS};

  public:
	StoreScreen(LawnApp *theApp);
	virtual ~StoreScreen();

	const StoreItemType *GetStoreItemType(int theSpotIndex);
	bool IsFullVersionOnly(const StoreItemType &theStoreItem);
	//static bool IsPottedPlant(OldStoreItemType theStoreItem);
	bool IsComingSoon(const StoreItemType &theStoreItem);
	bool IsItemSoldOut(const StoreItemType &theStoreItem);
	bool IsItemUnavailable(const StoreItemType &theStoreItem);
	static void GetStorePosition(int theSpotIndex, int &thePosX, int &thePosY);
	void DrawItemIcon(Graphics *g, int theItemPosition, const StoreItemType &theItemType, bool theIsForHighlight);
	void DrawItem(Graphics *g, int theItemPosition, const StoreItemType &theItemType);
	virtual void Draw(Graphics *g);
	virtual void DrawOverlay(Graphics *g);
	void SetBubbleText(int theCrazyDaveMessage, int theTime, bool theClickToContinue);
	void UpdateMouse();
	void StorePreload();
	bool CanInteractWithButtons();
	virtual void Update();
	virtual void AddedToManager(WidgetManager *theWidgetManager);
	virtual void RemovedFromManager(WidgetManager *theWidgetManager);
	virtual void ButtonPress(int theId);
	virtual void ButtonDepress(int theId);
	virtual void KeyChar(SexyChar theChar);
	//static int GetItemCost(OldStoreItemType theStoreItem);
	bool CanAffordItem(const StoreItemType &theStoreItem);
	void PurchaseItem(const StoreItemType &theStoreItem);
	void AdvanceCrazyDaveDialog();
	virtual void MouseDown(int x, int y, int theClickCount);
	void EnableButtons(bool theEnable);
	void SetupForIntro(int theDialogIndex);
};

class StoreScreenOverlay : public Widget
{
  public:
	StoreScreen *mParent;

  public:
	StoreScreenOverlay(StoreScreen *theParent);
	virtual void Draw(Graphics *g);
};

#endif
