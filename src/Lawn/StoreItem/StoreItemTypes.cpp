#include "StoreItemTypes.h"
#include "StoreItem.h"
#include "../Registries.h"
#include "StoreItemBehaviorTypes.h"
#include "StoreItemGroups.h"
#include "Behaviors/ComingSoonBeforeOthersStoreItemBehavior.h"
#include "Behaviors/TreeOfWisdomShowDialogStoreItemBehavior.h"
#include "Behaviors/PacketUpgradeStoreItemBehavior.h"

namespace StoreItemTypes
{

const auto &GATLING_PEA = RegisterTypeOf<StoreItem>(
	"PVZ", "GATLING_PEA",
	{
		.mCost = 500
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_GATLINGPEA);
	}
);

const auto &TWIN_SUNFLOWER = RegisterTypeOf<StoreItem>(
	"PVZ", "TWIN_SUNFLOWER",
	{
		.mCost = 500
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_TWINSUNFLOWER);
	}
);

const auto &GLOOM_SHROOM = RegisterTypeOf<StoreItem>(
	"PVZ", "GLOOM_SHROOM",
	{
		.mCost = 750,
		.mUnlockLevel = 34
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_GLOOMSHROOM);
	}
);

const auto &CATTAIL = RegisterTypeOf<StoreItem>(
	"PVZ", "CATTAIL",
	{
		.mCost = 1000,
		.mUnlockLevel = 34
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_CATTAIL);
	}
);

const auto &WINTER_MELON = RegisterTypeOf<StoreItem>(
	"PVZ", "WINTER_MELON",
	{
		.mCost = 1000,
		.mUnlockLevel = 50
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_WINTERMELON);
	}
);

const auto &GOLD_MAGNET = RegisterTypeOf<StoreItem>(
	"PVZ", "GOLD_MAGNET",
	{
		.mCost = 300,
		.mUnlockLevel = 41
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_GOLD_MAGNET);
	}
);

const auto &SPIKEROCK = RegisterTypeOf<StoreItem>(
	"PVZ", "SPIKEROCK",
	{
		.mCost = 750,
		.mUnlockLevel = 41
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_SPIKEROCK);
	}
);

const auto &COB_CANNON = RegisterTypeOf<StoreItem>(
	"PVZ", "COB_CANNON",
	{
		.mCost = 2000,
		.mUnlockLevel = 50
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_COBCANNON);
	}
);

const auto &IMITATER = RegisterTypeOf<StoreItem>(
	"PVZ", "IMITATER",
	{
		.mCost = 3000,
		.mUnlockLevel = 50
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.MakeSeedPacketStoreItem(OldSeedType::SEED_IMITATER);
	}
);

const auto &BONUS_LAWN_MOWER = RegisterTypeOf<StoreItem>(
	"PVZ", "BONUS_LAWN_MOWER", //what even is this
	{
		.mMaxBuyCount = 2,
		.mUnavailable = true
	}
);

const auto &POTTED_MARIGOLD_1 = RegisterTypeOf<StoreItem>(
	"PVZ", "POTTED_MARIGOLD_1",
	{
		.mCost = 250
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBehaviors.Add(StoreItemBehaviorTypes::POTTED_MARIGOLD);
	}
);

const auto &POTTED_MARIGOLD_2 = RegisterTypeOf<StoreItem>(
	"PVZ", "POTTED_MARIGOLD_2",
	{
		.mCost = 250
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBehaviors.Add(StoreItemBehaviorTypes::POTTED_MARIGOLD);
	}
);

const auto &POTTED_MARIGOLD_3 = RegisterTypeOf<StoreItem>(
	"PVZ", "POTTED_MARIGOLD_3",
	{
		.mCost = 250
	},
	[](StoreItemType &theType, StoreItemAttributes &theAttributes)
	{
		theType.mGroup = StoreItemGroups::ZEN_GARDEN;
		theType.mBehaviors.Add(StoreItemBehaviorTypes::POTTED_MARIGOLD);
	}
);

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

		theType.mBehaviors.Add(StoreItemBehaviorTypes::COMING_SOON_BEFORE_NEW_GARDENS);
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
		theType.mBehaviors.Add(
			RegisterTypeOf<PacketUpgradeStoreItemBehavior>("PVZ", "PACKET_UPGRADE", {})
		);
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
		theType.mBehaviors.Add(
			RegisterTypeOf<TreeOfWisdomShowDialogStoreItemBehavior>("PVZ", "TREE_DIALOG", {})
		);
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
		theType.mBehaviors.Add(RegisterTypeOf<ComingSoonBeforeOthersStoreItemBehavior>(
			"PVZ",
			"TREE_FOOD_COMING_SOON_BEFORE_TREE",
			{},
			[](TypeOf<ComingSoonBeforeOthersStoreItemBehavior> &theType, auto &lol) 
			{
				theType.mOthers.push_back(TREE_OF_WISDOM);
			}
		));

		//aStoreItemType->mModifiers.Add(
		//	[](StoreItemModifierContext &theContext) {
		//		if (!theContext.mPlayerInfo.GetStoreItem(TREE_OF_WISDOM).mPurchases ||
		//		   !theContext.mPlayerInfo.GetStoreItem(TREE_FOOD).mTotalPurchasesEver)
		//		   theContext.mAttributes.mComingSoon = true;
		//	}
		//);
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