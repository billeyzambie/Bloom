#include "PlantTypes.h"
#include "Plant.h"
#include "../Registries.h"
#include "../../Sexy.TodLib/Reanimation/ReanimationTypes.h"

namespace PlantTypes
{

const auto &PEASHOOTER = RegisterTypeOf<Plant>(
	"PVZ", "PEASHOOTER",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::PEASHOOTER;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &SUNFLOWER = RegisterTypeOf<Plant>(
	"PVZ", "SUNFLOWER",
	{
		.mLaunchRate = 2500
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SUNFLOWER;
		theType.mSunCost = 50;
		theType.mRefreshTime = 750;
	}
);

const auto &CHERRY_BOMB = RegisterTypeOf<Plant>(
	"PVZ", "CHERRY_BOMB",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::CHERRY_BOMB;
		theType.mSunCost = 150;
		theType.mRefreshTime = 5000;
	}
);

const auto &WALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "WALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::WALL_NUT;
		theType.mSunCost = 50;
		theType.mRefreshTime = 3000;
	}
);

const auto &POTATO_MINE = RegisterTypeOf<Plant>(
	"PVZ", "POTATO_MINE",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::POTATO_MINE;
		theType.mSunCost = 25;
		theType.mRefreshTime = 3000;
	}
);

const auto &SNOW_PEA = RegisterTypeOf<Plant>(
	"PVZ", "SNOW_PEA",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SNOW_PEA;
		theType.mSunCost = 175;
		theType.mRefreshTime = 750;
	}
);

const auto &CHOMPER = RegisterTypeOf<Plant>(
	"PVZ", "CHOMPER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::CHOMPER;
		theType.mSunCost = 150;
		theType.mRefreshTime = 750;
	}
);

const auto &REPEATER = RegisterTypeOf<Plant>(
	"PVZ", "REPEATER",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::REPEATER;
		theType.mSunCost = 200;
		theType.mRefreshTime = 750;
	}
);

const auto &PUFF_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "PUFF_SHROOM",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::PUFF_SHROOM;
		theType.mSunCost = 0;
		theType.mRefreshTime = 750;
	}
);

const auto &SUN_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "SUN_SHROOM",
	{
		.mLaunchRate = 2500
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SUN_SHROOM;
		theType.mSunCost = 25;
		theType.mRefreshTime = 750;
	}
);

const auto &FUME_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "FUME_SHROOM",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::FUME_SHROOM;
		theType.mSunCost = 75;
		theType.mRefreshTime = 750;
	}
);

const auto &GRAVE_BUSTER = RegisterTypeOf<Plant>(
	"PVZ", "GRAVE_BUSTER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::FUME_SHROOM;
		theType.mSunCost = 75;
		theType.mRefreshTime = 750;
	}
);

const auto &HYPNO_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "HYPNO_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::HYPNO_SHROOM;
		theType.mSunCost = 75;
		theType.mRefreshTime = 3000;
	}
);

const auto &SCAREDY_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "SCAREDY_SHROOM",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SCAREDY_SHROOM;
		theType.mSunCost = 25;
		theType.mRefreshTime = 750;
	}
);

const auto &ICE_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "ICE_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::ICE_SHROOM;
		theType.mSunCost = 75;
		theType.mRefreshTime = 5000;
	}
);

const auto &DOOM_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "DOOM_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::DOOM_SHROOM;
		theType.mSunCost = 125;
		theType.mRefreshTime = 5000;
	}
);

const auto &LILY_PAD = RegisterTypeOf<Plant>(
	"PVZ", "LILY_PAD",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::LILY_PAD;
		theType.mSunCost = 25;
		theType.mRefreshTime = 750;
	}
);

const auto &SQUASH = RegisterTypeOf<Plant>(
	"PVZ", "SQUASH",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SQUASH;
		theType.mSunCost = 50;
		theType.mRefreshTime = 3000;
	}
);

const auto &THREEPEATER = RegisterTypeOf<Plant>(
	"PVZ", "THREEPEATER",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::THREEPEATER;
		theType.mSunCost = 125;
		theType.mRefreshTime = 750;
	}
);

const auto &TANGLE_KELP = RegisterTypeOf<Plant>(
	"PVZ", "TANGLE_KELP",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::TANGLE_KELP;
		theType.mSunCost = 25;
		theType.mRefreshTime = 3000;
	}
);

const auto &JALAPENO = RegisterTypeOf<Plant>(
	"PVZ", "JALAPENO",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::JALAPENO;
		theType.mSunCost = 125;
		theType.mRefreshTime = 5000;
	}
);

const auto &SPIKEWEED = RegisterTypeOf<Plant>(
	"PVZ", "SPIKEWEED",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SPIKEWEED;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &TORCHWOOD = RegisterTypeOf<Plant>(
	"PVZ", "TORCHWOOD",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::TORCHWOOD;
		theType.mSunCost = 175;
		theType.mRefreshTime = 750;
	}
);

const auto &TALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "TALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::TALL_NUT;
		theType.mSunCost = 125;
		theType.mRefreshTime = 3000;
	}
);

const auto &SEA_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "SEA_SHROOM",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SEA_SHROOM;
		theType.mSunCost = 0;
		theType.mRefreshTime = 3000;
	}
);

const auto &PLANTERN = RegisterTypeOf<Plant>(
	"PVZ", "PLANTERN",
	{
		.mLaunchRate = 2500
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::PLANTERN;
		theType.mSunCost = 25;
		theType.mRefreshTime = 3000;
	}
);

const auto &CACTUS = RegisterTypeOf<Plant>(
	"PVZ", "CACTUS",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::CACTUS;
		theType.mSunCost = 125;
		theType.mRefreshTime = 750;
	}
);

const auto &BLOVER = RegisterTypeOf<Plant>(
	"PVZ", "BLOVER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::BLOVER;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &SPLIT_PEA = RegisterTypeOf<Plant>(
	"PVZ", "SPLIT_PEA",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SPLIT_PEA;
		theType.mSunCost = 125;
		theType.mRefreshTime = 750;
	}
);

const auto &STARFRUIT = RegisterTypeOf<Plant>(
	"PVZ", "STARFRUIT",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::STARFRUIT;
		theType.mSunCost = 125;
		theType.mRefreshTime = 750;
	}
);

const auto &PUMPKIN = RegisterTypeOf<Plant>(
	"PVZ", "PUMPKIN",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::PUMPKIN;
		theType.mSunCost = 125;
		theType.mRefreshTime = 3000;
	}
);

const auto &MAGNET_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "MAGNET_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::MAGNET_SHROOM;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &CABBAGE_PULT = RegisterTypeOf<Plant>(
	"PVZ", "CABBAGE_PULT",
	{
		.mLaunchRate = 300
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::CABBAGE_PULT;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &FLOWER_POT = RegisterTypeOf<Plant>(
	"PVZ", "FLOWER_POT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::FLOWER_POT;
		theType.mSunCost = 25;
		theType.mRefreshTime = 750;
	}
);

const auto &KERNEL_PULT = RegisterTypeOf<Plant>(
	"PVZ", "KERNEL_PULT",
	{
		.mLaunchRate = 300
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::KERNEL_PULT;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &COFFEE_BEAN = RegisterTypeOf<Plant>(
	"PVZ", "COFFEE_BEAN",
	{
		.mIsFlying = true
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::COFFEE_BEAN;
		theType.mSunCost = 75;
		theType.mRefreshTime = 750;
	}
);

const auto &GARLIC = RegisterTypeOf<Plant>(
	"PVZ", "GARLIC",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::GARLIC;
		theType.mSunCost = 50;
		theType.mRefreshTime = 750;
	}
);

const auto &UMBRELLA_LEAF = RegisterTypeOf<Plant>(
	"PVZ", "UMBRELLA_LEAF",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::UMBRELLA_LEAF;
		theType.mSunCost = 100;
		theType.mRefreshTime = 750;
	}
);

const auto &MARIGOLD = RegisterTypeOf<Plant>(
	"PVZ", "MARIGOLD",
	{
		.mLaunchRate = 250
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::MARIGOLD;
		theType.mSunCost = 50;
		theType.mRefreshTime = 3000;
	}
);

const auto &MELON_PULT = RegisterTypeOf<Plant>(
	"PVZ", "MELON_PULT",
	{
		.mLaunchRate = 300
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::MELON_PULT;
		theType.mSunCost = 300;
		theType.mRefreshTime = 750;
	}
);

const auto &GATLING_PEA = RegisterTypeOf<Plant>(
	"PVZ", "GATLING_PEA",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::GATLING_PEA;
		theType.mSunCost = 250;
		theType.mRefreshTime = 5000;
	}
);

const auto &TWIN_SUNFLOWER = RegisterTypeOf<Plant>(
	"PVZ", "TWIN_SUNFLOWER",
	{
		.mLaunchRate = 2500
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::TWIN_SUNFLOWER;
		theType.mSunCost = 150;
		theType.mRefreshTime = 5000;
	}
);

const auto &GLOOM_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "GLOOM_SHROOM",
	{
		.mLaunchRate = 200
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::TWIN_SUNFLOWER;
		theType.mSunCost = 150;
		theType.mRefreshTime = 5000;
	}
);

const auto &CATTAIL = RegisterTypeOf<Plant>(
	"PVZ", "CATTAIL",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::TWIN_SUNFLOWER;
		theType.mSunCost = 225;
		theType.mRefreshTime = 5000;
	}
);

const auto &WINTER_MELON =  RegisterTypeOf<Plant>(
	"PVZ", "WINTER_MELON",
	{
		.mLaunchRate = 300
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::WINTER_MELON;
		theType.mSunCost = 200;
		theType.mRefreshTime = 5000;
	}
);

const auto &GOLD_MAGNET = RegisterTypeOf<Plant>(
	"PVZ", "GOLD_MAGNET",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::GOLD_MAGNET;
		theType.mSunCost = 50;
		theType.mRefreshTime = 5000;
	}
);

const auto &SPIKEROCK = RegisterTypeOf<Plant>(
	"PVZ", "SPIKEROCK",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::SPIKEROCK;
		theType.mSunCost = 125;
		theType.mRefreshTime = 5000;
	}
);

const auto &COB_CANNON = RegisterTypeOf<Plant>(
	"PVZ", "COB_CANNON",
	{
		.mLaunchRate = 600
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::COB_CANNON;
		theType.mSunCost = 500;
		theType.mRefreshTime = 5000;
	}
);

const auto &IMITATER = RegisterTypeOf<Plant>(
	"PVZ", "IMITATER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::IMITATER;
		theType.mSunCost = 0;
		theType.mRefreshTime = 750;
	}
);

const auto &EXPLODE_O_NUT = RegisterTypeOf<Plant>(
	"PVZ", "EXPLODE_O_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::WALL_NUT;
		theType.mSunCost = 0;
		theType.mRefreshTime = 3000;
	}
);

const auto &GIANT_WALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "GIANT_WALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::WALL_NUT;
		theType.mSunCost = 0;
		theType.mRefreshTime = 3000;
	}
);

const auto &SPROUT = RegisterTypeOf<Plant>(
	"PVZ", "SPROUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::ZEN_GARDEN_SPROUT;
		theType.mSunCost = 0;
		theType.mRefreshTime = 3000;
	}
);

const auto &LEFTPEATER = RegisterTypeOf<Plant>(
	"PVZ", "LEFTPEATER",
	{
		.mLaunchRate = 150
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::REPEATER;
		theType.mSunCost = 200;
		theType.mRefreshTime = 750;
	}
);

const auto &CUSTOM_TEST = RegisterTypeOf<Plant>(
	"PVZ", "CUSTOM_TEST",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationTypes::GOLD_BLOOM;
		theType.mSunCost = 150;
		theType.mRefreshTime = 750;
	}
);

const PlantType &FromOldSeedType(int theSeedType)
{
	TOD_ASSERT(theSeedType < OldSeedType::NUM_SEED_TYPES, "SeedType is not a plant type, or a modded plant type somehow got converted to a SeedType and back.");
	TOD_ASSERT(theSeedType >= 0, "SeedType was unexpectedly SEED_NONE");
	return Registries::PLANTS.GetByNumericalId(theSeedType);
}

const PlantType *FromOptionalOldSeedType(int theSeedType)
{
	if (theSeedType == -1)
		return nullptr;
	if (theSeedType >= OldSeedType::NUM_SEED_TYPES)
		return nullptr;
	return &Registries::PLANTS.GetByNumericalId(theSeedType);
}

} // namespace PlantTypes