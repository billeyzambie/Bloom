#include "StoreItemTypes.h"
#include "StoreItem.h"
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
#include "../Seed/SeedPacket.h"
#include "../Widget/LawnDialog.h"
#include "../Widget/GameButton.h"

using namespace StoreItemModifiers;

namespace StoreItemTypes
{

const auto &GATLING_PEA = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "GATLING_PEA", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_GATLINGPEA;

	return (StoreItemType *)aStoreItemType;
});

const auto &TWIN_SUNFLOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "TWIN_SUNFLOWER", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_TWINSUNFLOWER;

	return (StoreItemType *)aStoreItemType;
});

const auto &GLOOM_SHROOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	anAttributes.mUnlockLevel = 34;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "GLOOM_SHROOM", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_GLOOMSHROOM;

	return (StoreItemType *)aStoreItemType;
});

const auto &CATTAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mUnlockLevel = 34;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "CATTAIL", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_CATTAIL;

	return (StoreItemType *)aStoreItemType;
});

const auto &WINTER_MELON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	anAttributes.mUnlockLevel = 50;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "WINTERMELON", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_WINTERMELON;

	return (StoreItemType *)aStoreItemType;
});

const auto &GOLD_MAGNET = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	anAttributes.mUnlockLevel = 41;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "GOLD_MAGNET", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_GOLD_MAGNET;

	return (StoreItemType *)aStoreItemType;
});

const auto &SPIKEROCK = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	anAttributes.mUnlockLevel = 41;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "SPIKEROCK", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_SPIKEROCK;

	return (StoreItemType *)aStoreItemType;
});

const auto &COB_CANNON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 2000;
	anAttributes.mUnlockLevel = 50;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "COB_CANNON", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_COBCANNON;

	return (StoreItemType *)aStoreItemType;
});

const auto &IMITATER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	anAttributes.mUnlockLevel = 50;
	auto *aStoreItemType = new SeedPacketStoreItemType("PVZ", "IMITATER", anAttributes);
	aStoreItemType->mSeedType = OldSeedType::SEED_IMITATER;

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

const auto &GOLD_WATERING_CAN = RegisterTypeOf<StoreItem>(
	"PVZ", "GOLD_WATERING_CAN",
	{
		.mCost = 1000,
		.mDrawOffsetX = -14,
		.mDrawOffsetY = -4
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_WATERINGCANGOLD"};
	}
);

const auto &FERTILIZER = RegisterTypeOf<StoreItem>(
	"PVZ", "FERTILIZER",
	{
		.mCost = 75,
		.mBuyCount = 5,
		.mMaxBuyCount = 15,
		.mDrawOffsetX = -11,
		.mDrawOffsetY = -2
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_FERTILIZER"};
	}
);

const auto &BUG_SPRAY = RegisterTypeOf<StoreItem>(
	"PVZ", "BUG_SPRAY",
	{
		.mCost = 100,
		.mBuyCount = 5,
		.mMaxBuyCount = 15,
		.mDrawOffsetX = -12,
		.mDrawOffsetY = 3
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_BUG_SPRAY"};
	}
);

const auto &PHONOGRAPH = RegisterTypeOf<StoreItem>(
	"PVZ", "PHONOGRAPH",
	{
		.mCost = 1500,
		.mDrawOffsetX = -12,
		.mDrawOffsetY = 3
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_PHONOGRAPH"};
	}
);

const auto &GARDENING_GLOVE = RegisterTypeOf<StoreItem>(
	"PVZ", "GARDENING_GLOVE",
	{
		.mCost = 100,
		.mDrawOffsetX = -12,
		.mDrawOffsetY = 3
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_ZEN_GARDENGLOVE"};
	}
);

const auto &MUSHROOM_GARDEN = RegisterTypeOf<StoreItem>(
	"PVZ", "MUSHROOM_GARDEN",
	{
		.mCost = 3000,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -8,
		.mDrawOffsetY = 2
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_STORE_MUSHROOMGARDENICON"};
	}
);

const auto &WHEEL_BARROW = RegisterTypeOf<StoreItem>(
	"PVZ", "WHEEL_BARROW",
	{
		.mCost = 20,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -12,
		.mDrawOffsetY = 3
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_ZEN_WHEELBARROW"};
		aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
			if (!theContext.mPlayerInfo.GetStoreItemData(MUSHROOM_GARDEN).mPurchases &&
				!theContext.mPlayerInfo.GetStoreItemData(AQUARIUM_GARDEN).mPurchases)
				theContext.mAttributes.mComingSoon = true;
		});
	}
);

const auto &STINKY_THE_SNAIL = RegisterTypeOf<StoreItem>(
	"PVZ", "STINKY_THE_SNAIL",
	{
		.mCost = 300,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -24,
		.mDrawOffsetY = 14
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_REANIM_STINKY_TURN3"};
		aStoreItemType->mOnPurchase.Add(OnPurchaseSetPurchasesToCurrentTime);
	}
);

const auto &PACKET_UPGRADE = RegisterTypeOf<StoreItem>(
	"PVZ", "PACKET_UPGRADE",
	{
		.mCost = 75,
		.mMaxBuyCount = 4,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -7,
		.mDrawOffsetY = 7
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::UPGRADES;
		theType.mInsertion = ListInsertion<StoreItemType>::First();
		theType.mBaseIcon = {"PVZ", "IMAGE_STORE_PACKETUPGRADE"};
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
	}
);

const auto &POOL_CLEANER = RegisterTypeOf<StoreItem>(
	"PVZ", "POOL_CLEANER",
	{
		.mCost = 100,
		.mDrawOffsetX = 1,
		.mDrawOffsetY = 7
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::UPGRADES;
		theType.mInsertion = ListInsertion<StoreItemType>::After(PACKET_UPGRADE);
		theType.mBaseIcon = {"PVZ", "IMAGE_ICON_POOLCLEANER"};
	}
);

const auto &ROOF_CLEANER = RegisterTypeOf<StoreItem>(
	"PVZ", "ROOF_CLEANER",
	{
		.mCost = 300,
		.mUnlockLevel = 41,
		.mDrawOffsetX = 0,
		.mDrawOffsetY = 28
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::UPGRADES;
		theType.mInsertion = ListInsertion<StoreItemType>::After(POOL_CLEANER);
		theType.mBaseIcon = {"PVZ", "IMAGE_ICON_ROOFCLEANER"};
	}
);

const auto &RAKE = RegisterTypeOf<StoreItem>(
	"PVZ", "RAKE",
	{
		.mCost = 20,
		.mBuyCount = 3,
		.mDrawOffsetX = -5,
		.mDrawOffsetY = 10
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::UPGRADES;
		theType.mInsertion = ListInsertion<StoreItemType>::Before(GATLING_PEA);
		theType.mBaseIcon = {"PVZ", "IMAGE_ICON_RAKE"};
	}
);

const auto &AQUARIUM_GARDEN = RegisterTypeOf<StoreItem>(
	"PVZ", "AQUARIUM_GARDEN",
	{
		.mCost = 3000,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -8,
		.mDrawOffsetY = 2
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mInsertion = ListInsertion<StoreItemType>::Before(MUSHROOM_GARDEN);
		theType.mBaseIcon = {"PVZ", "IMAGE_STORE_AQUARIUMGARDENICON"};
	}
);

const auto &CHOCOLATE = RegisterTypeOf<StoreItem>(
	"PVZ", "CHOCOLATE",
	{
		.mUnavailable = true
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
	}
);

const auto &TREE_OF_WISDOM = RegisterTypeOf<StoreItem>(
	"PVZ", "TREE_OF_WISDOM",
	{
		.mCost = 1000,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -8,
		.mDrawOffsetY = 2
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_STORE_TREEOFWISDOMICON"};
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
	}
);

const auto &TREE_FOOD = RegisterTypeOf<StoreItem>(
	"PVZ", "TREE_FOOD",
	{
		.mCost = 250,
		.mMaxBuyCount = 10,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -8,
		.mDrawOffsetY = -2
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBaseIcon = {"PVZ", "IMAGE_TREEFOOD"};
		aStoreItemType->mModifiers.Add(
			[](StoreItemModifierContext &theContext) {
				if (!theContext.mPlayerInfo.GetStoreItemData(TREE_OF_WISDOM).mPurchases ||
				   !theContext.mPlayerInfo.GetStoreItemData(TREE_FOOD).mTotalPurchasesEver)
				   theContext.mAttributes.mComingSoon = true;
			}
		);
	}
);

const auto &FIRST_AID = RegisterTypeOf<StoreItem>(
	"PVZ", "FIRST_AID",
	{
		.mCost = 200,
		.mUnlockLevel = 50,
		.mDrawOffsetX = -1,
		.mDrawOffsetY = 13
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::UPGRADES;
		theType.mBaseIcon = {"PVZ", "IMAGE_STORE_FIRSTAIDWALLNUTICON"};
	}
);

const auto &PVZ = RegisterTypeOf<StoreItem>(
	"PVZ", "PVZ",
	{
		.mCost = 200,
		.mDrawOffsetX = 0,
		.mDrawOffsetY = -9,
		.mUnavailable = true
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mBaseIcon = {"PVZ", "IMAGE_STORE_PVZICON"};
	}
);

const auto &CUSTOM_TEST = RegisterTypeOf<StoreItem>(
	"PVZ", "CUSTOM_TEST",
	{
		.mCost = 200,
		.mDrawOffsetX = 9,
		.mDrawOffsetY = 37,
		.mUnavailable = true
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mBaseIcon = {"PVZ", "IMAGE_BRAIN"};
	}
);

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

std::array<const RegistryHolder<StoreItemType> *, 8> gOldStoreItemSpots[NUM_STORE_PAGES] = {
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