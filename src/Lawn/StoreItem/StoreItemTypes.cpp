#include "StoreItemTypes.h"
#include "../Registries.h"
#include "PacketUpgradeStoreItemType.h"
#include "SeedPacketStoreItemType.h"
#include "PottedPlantStoreItemType.h"
#include "StoreItemModifiers.h"
#include "StoreItemGroups.h"

#include "../System/PlayerInfo.h"
#include "../Widget/StoreScreen.h"
#include "../../Sexy.TodLib/TodStringFile.h"
#include "../../SexyAppFramework/Dialog.h"
#include "../Board.h"
#include "../SeedPacket.h"
#include "../Widget/LawnDialog.h"
#include "../Widget/GameButton.h"

using namespace StoreItemModifiers;

namespace StoreItemTypes
{

const auto &GATLING_PEA = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "GATLING_PEA", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_GATLINGPEA;

	return (StoreItemType *)aStoreItemType;
});

const auto &TWIN_SUNFLOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "TWIN_SUNFLOWER", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_TWINSUNFLOWER;

	return (StoreItemType *)aStoreItemType;
});

const auto &GLOOM_SHROOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	anAttributes.mUnlockLevel = 34;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "GLOOM_SHROOM", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_GLOOMSHROOM;

	return (StoreItemType *)aStoreItemType;
});

const auto &CATTAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mUnlockLevel = 34;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "CATTAIL", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_CATTAIL;

	return (StoreItemType *)aStoreItemType;
});

const auto &WINTER_MELON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mUnlockLevel = 50;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "WINTERMELON", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_WINTERMELON;

	return (StoreItemType *)aStoreItemType;
});

const auto &GOLD_MAGNET = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	anAttributes.mUnlockLevel = 41;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "GOLD_MAGNET", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_GOLD_MAGNET;

	return (StoreItemType *)aStoreItemType;
});

const auto &SPIKEROCK = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	anAttributes.mUnlockLevel = 41;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "SPIKEROCK", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_SPIKEROCK;

	return (StoreItemType *)aStoreItemType;
});

const auto &COB_CANNON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 2000;
	anAttributes.mUnlockLevel = 50;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "COB_CANNON", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_COBCANNON;

	return (StoreItemType *)aStoreItemType;
});

const auto &IMITATER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	anAttributes.mUnlockLevel = 50;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "IMITATER", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_IMITATER;

	return (StoreItemType *)aStoreItemType;
});

const auto &BONUS_LAWN_MOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mMaxBuyCount = 2;
	anAttributes.mUnavailable = true;
	auto *aStoreItemType = new StoreItemType("PVZ", "BONUS_LAWN_MOWER", anAttributes);	//what even is this
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_1 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new PottedPlantStoreItemType("PVZ", "POTTED_MARIGOLD_1", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;

	return (StoreItemType *)aStoreItemType;
});

const auto &POTTED_MARIGOLD_2 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new PottedPlantStoreItemType("PVZ", "POTTED_MARIGOLD_2", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;

	return (StoreItemType *)aStoreItemType;
});

const auto &POTTED_MARIGOLD_3 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new PottedPlantStoreItemType("PVZ", "POTTED_MARIGOLD_3", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;

	return (StoreItemType *)aStoreItemType;
});

const auto &GOLD_WATERING_CAN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mDrawOffsetX = -14;
	anAttributes.mDrawOffsetY = -4;
	auto *aStoreItemType = new StoreItemType("PVZ", "GOLD_WATERING_CAN", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_WATERINGCANGOLD"};
	return aStoreItemType;
});

const auto &FERTILIZER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 75;
	anAttributes.mDrawOffsetX = -11;
	anAttributes.mDrawOffsetY = -2;
	anAttributes.mBuyCount = 5;
	anAttributes.mMaxBuyCount = 15;
	auto *aStoreItemType = new StoreItemType("PVZ", "FERTILIZER", anAttributes);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_FERTILIZER"};
	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;

	return aStoreItemType;
});

const auto &BUG_SPRAY = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	anAttributes.mBuyCount = 5;
	anAttributes.mMaxBuyCount = 15;
	auto *aStoreItemType = new StoreItemType("PVZ", "BUG_SPRAY", anAttributes);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_BUG_SPRAY"};
	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;

	return aStoreItemType;
});

const auto &PHONOGRAPH = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1500;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	auto *aStoreItemType = new StoreItemType("PVZ", "PHONOGRAPH", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_PHONOGRAPH"};
	return aStoreItemType;
});

const auto &GARDENING_GLOVE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	auto *aStoreItemType = new StoreItemType("PVZ", "GARDENING_GLOVE", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_ZEN_GARDENGLOVE"};
	return aStoreItemType;
});

const auto &MUSHROOM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = 2;
	auto *aStoreItemType = new StoreItemType("PVZ", "MUSHROOM_GARDEN", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_STORE_MUSHROOMGARDENICON"};
	return aStoreItemType;
});

const auto &WHEEL_BARROW = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 20;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	auto *aStoreItemType = new StoreItemType("PVZ", "WHEEL_BARROW", anAttributes);

	aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
		if (!theContext.mPlayerInfo.GetStoreItemData(MUSHROOM_GARDEN).mPurchases &&
			!theContext.mPlayerInfo.GetStoreItemData(AQUARIUM_GARDEN).mPurchases)
			theContext.mAttributes.mComingSoon = true;
	});

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_ZEN_WHEELBARROW"};

	return aStoreItemType;
});

const auto &STINKY_THE_SNAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -24;
	anAttributes.mDrawOffsetY = 14;
	auto *aStoreItemType = new StoreItemType("PVZ", "STINKY_THE_SNAIL", anAttributes);
	aStoreItemType->mOnPurchase.Add(OnPurchaseSetPurchasesToCurrentTime);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_REANIM_STINKY_TURN3"};

	return aStoreItemType;
});

const auto &PACKET_UPGRADE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 75;
	anAttributes.mDrawOffsetX = -7;
	anAttributes.mDrawOffsetY = 7;
	anAttributes.mMaxBuyCount = 4;
	auto *aStoreItemType = new PacketUpgradeStoreItemType("PVZ", "PACKET_UPGRADE", anAttributes);

	aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
		int aPurchase = theContext.mStoreItemData.mPurchases;
		int aTargetPrice = aPurchase == 0 ? 75 : aPurchase == 1 ? 500 : aPurchase == 2 ? 2000 : 8000;
		theContext.mAttributes.mCost *= aTargetPrice / 75.0f;
	});
	aStoreItemType->mOnPurchase.Add([](StoreItemPurchaseContext &theContext) {
		LawnApp &anApp = *theContext.mStoreScreen->mApp;

		auto *aStoreScreen = theContext.mStoreScreen;
		if (aStoreScreen)
		{
			SexyString aDialogLines = StrFormat(TodStringTranslate("[NOW_YOU_CAN_CHOOSE_X_SEEDS]").c_str(),
												6 + theContext.mStoreItemData.mPurchases);
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
	});

	aStoreItemType->mGroup = StoreItemGroups::UPGRADES;
	aStoreItemType->mInsertion = ListInsertion<StoreItemType>::First();
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_STORE_PACKETUPGRADE"};

	return (StoreItemType *)aStoreItemType;
});

const auto &POOL_CLEANER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	anAttributes.mDrawOffsetX = 1;
	anAttributes.mDrawOffsetY = 7;
	auto *aStoreItemType = new StoreItemType("PVZ", "POOL_CLEANER", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::UPGRADES;
	aStoreItemType->mInsertion = ListInsertion<StoreItemType>::After(PACKET_UPGRADE);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_ICON_POOLCLEANER"};
	
	return aStoreItemType;
});

const auto &ROOF_CLEANER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	anAttributes.mUnlockLevel = 41;
	anAttributes.mDrawOffsetX = 0;
	anAttributes.mDrawOffsetY = 28;
	auto *aStoreItemType = new StoreItemType("PVZ", "ROOF_CLEANER", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::UPGRADES;
	aStoreItemType->mInsertion = ListInsertion<StoreItemType>::After(POOL_CLEANER);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_ICON_ROOFCLEANER"};

	return aStoreItemType;
});

const auto &RAKE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 20;
	anAttributes.mDrawOffsetX = -5;
	anAttributes.mDrawOffsetY = 10;
	anAttributes.mBuyCount = 3;
	auto *aStoreItemType = new StoreItemType("PVZ", "RAKE", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::UPGRADES;
	aStoreItemType->mInsertion = ListInsertion<StoreItemType>::Before(GATLING_PEA);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_ICON_RAKE"};

	return aStoreItemType;
});

const auto &AQUARIUM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = 2;
	auto *aStoreItemType = new StoreItemType("PVZ", "AQUARIUM_GARDEN", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mInsertion = ListInsertion<StoreItemType>::After(MUSHROOM_GARDEN);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_STORE_AQUARIUMGARDENICON"};

	return aStoreItemType;
});

const auto &CHOCOLATE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mUnavailable = true;
	auto *aStoreItemType = new StoreItemType("PVZ", "CHOCOLATE", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;

	return aStoreItemType;
});

const auto &TREE_OF_WISDOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = 2;
	auto *aStoreItemType = new StoreItemType("PVZ", "TREE_OF_WISDOM", anAttributes);
	aStoreItemType->mOnPurchase.Add([](StoreItemPurchaseContext &theContext) {
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
	});

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_STORE_TREEOFWISDOMICON"};

	return aStoreItemType;
});

const auto &TREE_FOOD = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = -2;
	anAttributes.mMaxBuyCount = 10;
	auto *aStoreItemType = new StoreItemType("PVZ", "TREE_FOOD", anAttributes);

	aStoreItemType->mModifiers.Add(
		[](StoreItemModifierContext &theContext) {
			if (!theContext.mPlayerInfo.GetStoreItemData(TREE_OF_WISDOM).mPurchases ||
			   !theContext.mPlayerInfo.GetStoreItemData(TREE_FOOD).mTotalPurchasesEver)
			   theContext.mAttributes.mComingSoon = true;
		}
	);

	aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_TREEFOOD"};						   

	return aStoreItemType;
});

const auto &FIRST_AID = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	anAttributes.mUnlockLevel = 50;
	anAttributes.mDrawOffsetX = -1;
	anAttributes.mDrawOffsetY = 13;
	auto *aStoreItemType = new StoreItemType("PVZ", "FIRST_AID", anAttributes);

	aStoreItemType->mGroup = StoreItemGroups::UPGRADES;
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_STORE_FIRSTAIDWALLNUTICON"};
	return aStoreItemType;
});

const auto &PLANTS_VS_ZOMBIES = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	anAttributes.mDrawOffsetX = 0;
	anAttributes.mDrawOffsetY = -9;
	anAttributes.mUnavailable = true;
	auto *aStoreItemType = new StoreItemType("PVZ", "PVZ", anAttributes);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_STORE_PVZICON"};
	return aStoreItemType;
});

const auto &CUSTOM_TEST = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	anAttributes.mDrawOffsetX = 9;
	anAttributes.mDrawOffsetY = 37;
	auto *aStoreItemType = new StoreItemType("PVZ", "CUSTOM_TEST", anAttributes);
	aStoreItemType->mBaseIcon = {"PVZ", "IMAGE_BRAIN"};

	//aStoreItemType->mGroup = StoreItemGroups::ZEN_GARDEN;
	//aStoreItemType->mInsertion = ListInsertion<StoreItemType>::Before(SPIKEROCK);

	return aStoreItemType;
});

//const auto &CUSTOM_TEST_2 = Registries::STORE_ITEMS.Register([]() {
//	StoreItemAttributes anAttributes;
//	anAttributes.mCost = 200;
//	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "custom_test_2", anAttributes);
//
//	aStoreItemType->mSeedType = SEED_SNOWPEA;
//	aStoreItemType->mInsertion = ListInsertion<StoreItemType>::Last(EventPriority::LOW);
//
//	return (StoreItemType *)aStoreItemType;
//});

} // namespace StoreItemTypes

std::array<const RegistryTypeHolder<StoreItemType> *, 8> gOldStoreItemSpots[NUM_STORE_PAGES] = {
	{&StoreItemTypes::PACKET_UPGRADE, &StoreItemTypes::POOL_CLEANER, &StoreItemTypes::RAKE,
	 &StoreItemTypes::ROOF_CLEANER, &StoreItemTypes::GATLING_PEA, &StoreItemTypes::TWIN_SUNFLOWER,
	 &StoreItemTypes::GLOOM_SHROOM, &StoreItemTypes::CATTAIL},
	{&StoreItemTypes::SPIKEROCK, &StoreItemTypes::GOLD_MAGNET, &StoreItemTypes::WINTER_MELON,
	 &StoreItemTypes::COB_CANNON, &StoreItemTypes::IMITATER, &StoreItemTypes::FIRST_AID, nullptr, nullptr},
	{&StoreItemTypes::POTTED_MARIGOLD_1, &StoreItemTypes::POTTED_MARIGOLD_2, &StoreItemTypes::POTTED_MARIGOLD_3,
	 &StoreItemTypes::GOLD_WATERING_CAN, &StoreItemTypes::FERTILIZER, &StoreItemTypes::BUG_SPRAY,
	 &StoreItemTypes::PHONOGRAPH, &StoreItemTypes::GARDENING_GLOVE},
	{&StoreItemTypes::MUSHROOM_GARDEN, &StoreItemTypes::AQUARIUM_GARDEN, &StoreItemTypes::WHEEL_BARROW,
	 &StoreItemTypes::STINKY_THE_SNAIL, &StoreItemTypes::TREE_OF_WISDOM, &StoreItemTypes::TREE_FOOD,
#if INCLUDE_TEST_STORE_ITEM
	 &StoreItemTypes::CUSTOM_TEST,
#else
	 nullptr,
#endif
	 nullptr}};