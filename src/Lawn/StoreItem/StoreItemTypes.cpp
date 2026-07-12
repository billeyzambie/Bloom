#include "StoreItemTypes.h"
#include "../Registries.h"
#include "PacketUpgradeStoreItemType.h"
#include "SeedPacketStoreItemType.h"
#include "PottedPlantStoreItemType.h"
#include "StoreItemModifiers.h"

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
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "gatling_pea", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_GATLINGPEA;
	return (StoreItemType *)aStoreItemType;
});

const auto &TWIN_SUNFLOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "twin_sunflower", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_TWINSUNFLOWER;
	return (StoreItemType *)aStoreItemType;
});

const auto &GLOOM_SHROOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "gloom_shroom", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_GLOOMSHROOM;
	aStoreItemType->mModifiers.Add(UnavailableBelowLevel<35>);
	return (StoreItemType *)aStoreItemType;
});

const auto &CATTAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "cattail", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_CATTAIL;
	aStoreItemType->mModifiers.Add(UnavailableBelowLevel<35>);
	return (StoreItemType *)aStoreItemType;
});

const auto &WINTER_MELON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "wintermelon", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_WINTERMELON;
	aStoreItemType->mModifiers.Add(UnavailableUntilAdventureFinished);
	return (StoreItemType *)aStoreItemType;
});

const auto &GOLD_MAGNET = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "gold_magnet", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_GOLD_MAGNET;
	aStoreItemType->mModifiers.Add(UnavailableBelowLevel<41>);
	return (StoreItemType *)aStoreItemType;
});

const auto &SPIKEROCK = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "spikerock", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_SPIKEROCK;
	aStoreItemType->mModifiers.Add(UnavailableBelowLevel<41>);
	return (StoreItemType *)aStoreItemType;
});

const auto &COB_CANNON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 2000;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "cob_cannon", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_COBCANNON;
	aStoreItemType->mModifiers.Add(UnavailableUntilAdventureFinished);
	return (StoreItemType *)aStoreItemType;
});

const auto &IMITATER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	auto *aStoreItemType = new SeedPacketStoreItemType(PVZ, "imitater", anAttributes);
	aStoreItemType->mSeedType = SeedType::SEED_IMITATER;
	aStoreItemType->mModifiers.Add(UnavailableUntilAdventureFinished);
	return (StoreItemType *)aStoreItemType;
});

const auto &BONUS_LAWN_MOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mMaxBuyCount = 2;
	auto *aStoreItemType = new StoreItemType(PVZ, "bonus_lawn_mower", anAttributes);	//what even is this
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_1 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new PottedPlantStoreItemType(PVZ, "potted_marigold_1", anAttributes);
	return (StoreItemType *)aStoreItemType;
});

const auto &POTTED_MARIGOLD_2 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new PottedPlantStoreItemType(PVZ, "potted_marigold_2", anAttributes);
	return (StoreItemType *)aStoreItemType;
});

const auto &POTTED_MARIGOLD_3 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new PottedPlantStoreItemType(PVZ, "potted_marigold_3", anAttributes);
	return (StoreItemType *)aStoreItemType;
});

const auto &GOLD_WATERING_CAN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mDrawOffsetX = -14;
	anAttributes.mDrawOffsetY = -4;
	anAttributes.mIcon = Sexy::IMAGE_WATERINGCANGOLD_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "gold_watering_can", anAttributes);
	return aStoreItemType;
});

const auto &FERTILIZER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 75;
	anAttributes.mDrawOffsetX = -11;
	anAttributes.mDrawOffsetY = -2;
	anAttributes.mIcon = Sexy::IMAGE_FERTILIZER_ID;
	anAttributes.mBuyCount = 5;
	anAttributes.mMaxBuyCount = 15;
	auto *aStoreItemType = new StoreItemType(PVZ, "fertilizer", anAttributes);
	return aStoreItemType;
});

const auto &BUG_SPRAY = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	anAttributes.mIcon = Sexy::IMAGE_BUG_SPRAY_ID;
	anAttributes.mBuyCount = 5;
	anAttributes.mMaxBuyCount = 15;
	auto *aStoreItemType = new StoreItemType(PVZ, "bug_spray", anAttributes);
	return aStoreItemType;
});

const auto &PHONOGRAPH = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1500;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	anAttributes.mIcon = Sexy::IMAGE_PHONOGRAPH_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "phonograph", anAttributes);
	return aStoreItemType;
});

const auto &GARDENING_GLOVE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	anAttributes.mIcon = Sexy::IMAGE_ZEN_GARDENGLOVE_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "gardening_glove", anAttributes);
	return aStoreItemType;
});

const auto &MUSHROOM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = 2;
	anAttributes.mIcon = Sexy::IMAGE_STORE_MUSHROOMGARDENICON_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "mushroom_garden", anAttributes);
	return aStoreItemType;
});

const auto &WHEEL_BARROW = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 20;
	anAttributes.mDrawOffsetX = -12;
	anAttributes.mDrawOffsetY = 3;
	anAttributes.mIcon = Sexy::IMAGE_ZEN_WHEELBARROW_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "wheel_barrow", anAttributes);

	aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
		if (!theContext.mPlayerInfo.GetStoreItemData(MUSHROOM_GARDEN).mPurchases &&
			!theContext.mPlayerInfo.GetStoreItemData(AQUARIUM_GARDEN).mPurchases)
			theContext.mAttributes.mComingSoon = true;
	});

	return aStoreItemType;
});

const auto &STINKY_THE_SNAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	anAttributes.mDrawOffsetX = -24;
	anAttributes.mDrawOffsetY = 14;
	anAttributes.mIcon = Sexy::IMAGE_REANIM_STINKY_TURN3_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "stinky_the_snail", anAttributes);
	aStoreItemType->mOnPurchase.Add(OnPurchaseSetPurchasesToCurrentTime);
	return aStoreItemType;
});

const auto &PACKET_UPGRADE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 75;
	anAttributes.mDrawOffsetX = -7;
	anAttributes.mDrawOffsetY = 7;
	anAttributes.mMaxBuyCount = 4;
	anAttributes.mIcon = Sexy::IMAGE_STORE_PACKETUPGRADE_ID;
	auto *aStoreItemType = new PacketUpgradeStoreItemType(PVZ, "packet_upgrade", anAttributes);

	aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
		int aPurchase = theContext.mStoreItemData.mPurchases;
		int aTargetPrice = aPurchase == 0 ? 75 : aPurchase == 1 ? 500 : aPurchase == 2 ? 2000 : 8000;
		theContext.mAttributes.mCost *= aTargetPrice / 75.0f;
	});
	aStoreItemType->mOnPurchase.Add([](StoreItemPurchaseContext &theContext) {
		++theContext.mStoreItemData.mPurchases;

		LawnApp &anApp = *theContext.mStoreScreen->mApp;

		auto *aStoreScreen = theContext.mStoreScreen;
		if (aStoreScreen)
		{
			SexyString aDialogLines =
				StrFormat(TodStringTranslate("[NOW_YOU_CAN_CHOOSE_X_SEEDS]").c_str(), 6 + theContext.mStoreItemData.mPurchases);
			Dialog *aDialog = anApp.DoDialog(
				DIALOG_UPGRADED, true, "[MORE_SLOTS]", aDialogLines, "[DIALOG_BUTTON_OK]", Dialog::BUTTONS_FOOTER);

			aStoreScreen->mWaitForDialog = true;
			aDialog->WaitForResult(true);
			aStoreScreen->mWaitForDialog = false;
		}

		if (anApp.mBoard)
		{
			anApp.mBoard->mSeedBank->UpdateWidth();
		}
	});
	return (StoreItemType *)aStoreItemType;
});

const auto &POOL_CLEANER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	anAttributes.mDrawOffsetX = 1;
	anAttributes.mDrawOffsetY = 7;
	anAttributes.mIcon = Sexy::IMAGE_ICON_POOLCLEANER_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "pool_cleaner", anAttributes);
	return aStoreItemType;
});

const auto &ROOF_CLEANER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	anAttributes.mDrawOffsetX = 0;
	anAttributes.mDrawOffsetY = 28;
	anAttributes.mIcon = Sexy::IMAGE_ICON_ROOFCLEANER_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "roof_cleaner", anAttributes);
	aStoreItemType->mModifiers.Add(UnavailableBelowLevel<42>);
	return aStoreItemType;
});

const auto &RAKE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 20;
	anAttributes.mDrawOffsetX = -5;
	anAttributes.mDrawOffsetY = 10;
	anAttributes.mBuyCount = 3;
	anAttributes.mIcon = Sexy::IMAGE_ICON_RAKE_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "rake", anAttributes);
	return aStoreItemType;
});

const auto &AQUARIUM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = 2;
	anAttributes.mIcon = Sexy::IMAGE_STORE_AQUARIUMGARDENICON_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "aquarium_garden", anAttributes);
	return aStoreItemType;
});

const auto &CHOCOLATE = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "chocolate", {});
	return aStoreItemType;
});

const auto &TREE_OF_WISDOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = 2;
	anAttributes.mIcon = Sexy::IMAGE_STORE_TREEOFWISDOMICON_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "tree_of_wisdom", anAttributes);
	aStoreItemType->mOnPurchase.Add([](StoreItemPurchaseContext &theContext) {
		theContext.mStoreItemData.mPurchases = 1;
		theContext.mApp.mPlayerInfo->mChallengeRecords[GAMEMODE_TREE_OF_WISDOM] = 1;
		
		auto *aStoreScreen = theContext.mStoreScreen;
		if (aStoreScreen)
		{
			LawnDialog *aDialog = (LawnDialog *)aStoreScreen->mApp->DoDialog(DIALOG_STORE_PURCHASE, true, "[VISIT_TREE_HEADER]",
															   "[VISIT_TREE_BODY]", "", Dialog::BUTTONS_YES_NO);
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
	return aStoreItemType;
});

const auto &TREE_FOOD = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	anAttributes.mDrawOffsetX = -8;
	anAttributes.mDrawOffsetY = -2;
	anAttributes.mIcon = Sexy::IMAGE_TREEFOOD_ID;
	anAttributes.mMaxBuyCount = 10;
	auto *aStoreItemType = new StoreItemType(PVZ, "tree_food", anAttributes);

	aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
		if (!theContext.mPlayerInfo.GetStoreItemData(TREE_OF_WISDOM).mPurchases ||
			!theContext.mPlayerInfo.GetStoreItemData(TREE_FOOD).mTotalPurchasesEver)
			theContext.mAttributes.mComingSoon = true;
	});

	return aStoreItemType;
});

const auto &FIRST_AID = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	anAttributes.mDrawOffsetX = -1;
	anAttributes.mDrawOffsetY = 13;
	anAttributes.mIcon = Sexy::IMAGE_STORE_FIRSTAIDWALLNUTICON_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "first_aid", anAttributes);
	aStoreItemType->mModifiers.Add(UnavailableUntilAdventureFinished);
	return aStoreItemType;
});

const auto &PLANTS_VS_ZOMBIES = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	anAttributes.mDrawOffsetX = 0;
	anAttributes.mDrawOffsetY = -9;
	anAttributes.mIcon = Sexy::IMAGE_STORE_PVZICON_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "pvz", anAttributes);
	return aStoreItemType;
});

#if INCLUDE_TEST_STORE_ITEM
const auto &CUSTOM_TEST = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	anAttributes.mDrawOffsetX = 9;
	anAttributes.mDrawOffsetY = 37;
	anAttributes.mIcon = Sexy::IMAGE_BRAIN_ID;
	auto *aStoreItemType = new StoreItemType(PVZ, "custom_test", anAttributes);
	return aStoreItemType;
});
#endif

} // namespace StoreItemTypes

std::array<const RegistryTypeHolder<StoreItemType> *, 8> gStoreItemSpots[NUM_STORE_PAGES] = {
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

void ReplaceStoreItemSpot(int thePage, int theSpotIndex, const RegistryTypeHolder<StoreItemType> &theItemType)
{
	gStoreItemSpots[thePage][theSpotIndex] = &theItemType;
}