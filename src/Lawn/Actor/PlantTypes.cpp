#include "PlantTypes.h"
#include "Plant.h"
#include "../Registries.h"

namespace PlantTypes
{

const auto &PEASHOOTER = RegisterTypeOf<Plant>(
	"PVZ", "PEASHOOTER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_PEASHOOTER;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &SUNFLOWER = RegisterTypeOf<Plant>(
	"PVZ", "SUNFLOWER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SUNFLOWER;
		theType.mCost = 50;
		theType.mRechargeTime = 750;
	}
);

const auto &CHERRY_BOMB = RegisterTypeOf<Plant>(
	"PVZ", "CHERRY_BOMB",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_CHERRYBOMB;
		theType.mCost = 150;
		theType.mRechargeTime = 5000;
	}
);

const auto &WALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "WALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_WALLNUT;
		theType.mCost = 50;
		theType.mRechargeTime = 3000;
	}
);

const auto &POTATO_MINE = RegisterTypeOf<Plant>(
	"PVZ", "POTATO_MINE",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_POTATOMINE;
		theType.mCost = 25;
		theType.mRechargeTime = 3000;
	}
);

const auto &SNOW_PEA = RegisterTypeOf<Plant>(
	"PVZ", "SNOW_PEA",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SNOWPEA;
		theType.mCost = 175;
		theType.mRechargeTime = 750;
	}
);

const auto &CHOMPER = RegisterTypeOf<Plant>(
	"PVZ", "CHOMPER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_CHOMPER;
		theType.mCost = 150;
		theType.mRechargeTime = 750;
	}
);

const auto &REPEATER = RegisterTypeOf<Plant>(
	"PVZ", "REPEATER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_REPEATER;
		theType.mCost = 200;
		theType.mRechargeTime = 750;
	}
);

const auto &PUFF_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "PUFF_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_PUFFSHROOM;
		theType.mCost = 0;
		theType.mRechargeTime = 750;
	}
);

const auto &SUN_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "SUN_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SUNSHROOM;
		theType.mCost = 25;
		theType.mRechargeTime = 750;
	}
);

const auto &FUME_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "FUME_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_FUMESHROOM;
		theType.mCost = 75;
		theType.mRechargeTime = 750;
	}
);

const auto &GRAVE_BUSTER = RegisterTypeOf<Plant>(
	"PVZ", "GRAVE_BUSTER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_FUMESHROOM;
		theType.mCost = 75;
		theType.mRechargeTime = 750;
	}
);

const auto &HYPNO_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "HYPNO_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_FUMESHROOM;
		theType.mCost = 75;
		theType.mRechargeTime = 3000;
	}
);

const auto &SCAREDY_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "SCAREDY_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SCRAREYSHROOM;
		theType.mCost = 25;
		theType.mRechargeTime = 750;
	}
);

const auto &ICE_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "ICE_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_ICESHROOM;
		theType.mCost = 75;
		theType.mRechargeTime = 5000;
	}
);

const auto &DOOM_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "DOOM_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_DOOMSHROOM;
		theType.mCost = 125;
		theType.mRechargeTime = 5000;
	}
);

const auto &LILY_PAD = RegisterTypeOf<Plant>(
	"PVZ", "LILY_PAD",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_LILYPAD;
		theType.mCost = 25;
		theType.mRechargeTime = 750;
	}
);

const auto &SQUASH = RegisterTypeOf<Plant>(
	"PVZ", "SQUASH",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SQUASH;
		theType.mCost = 50;
		theType.mRechargeTime = 3000;
	}
);

const auto &THREEPEATER = RegisterTypeOf<Plant>(
	"PVZ", "THREEPEATER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_THREEPEATER;
		theType.mCost = 125;
		theType.mRechargeTime = 750;
	}
);

const auto &TANGLE_KELP = RegisterTypeOf<Plant>(
	"PVZ", "TANGLE_KELP",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TANGLEKELP;
		theType.mCost = 25;
		theType.mRechargeTime = 3000;
	}
);

const auto &JALAPENO = RegisterTypeOf<Plant>(
	"PVZ", "JALAPENO",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_JALAPENO;
		theType.mCost = 125;
		theType.mRechargeTime = 5000;
	}
);

const auto &SPIKEWEED = RegisterTypeOf<Plant>(
	"PVZ", "SPIKEWEED",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_JALAPENO;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &TORCHWOOD = RegisterTypeOf<Plant>(
	"PVZ", "TORCHWOOD",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TORCHWOOD;
		theType.mCost = 175;
		theType.mRechargeTime = 750;
	}
);

const auto &TALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "TALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TALLNUT;
		theType.mCost = 125;
		theType.mRechargeTime = 3000;
	}
);

const auto &TALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "TALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TALLNUT;
		theType.mCost = 125;
		theType.mRechargeTime = 3000;
	}
);

const auto &SEA_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "SEA_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SEASHROOM;
		theType.mCost = 0;
		theType.mRechargeTime = 3000;
	}
);

const auto &PLANTERN = RegisterTypeOf<Plant>(
	"PVZ", "PLANTERN",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_PLANTERN;
		theType.mCost = 25;
		theType.mRechargeTime = 3000;
	}
);

const auto &CACTUS = RegisterTypeOf<Plant>(
	"PVZ", "CACTUS",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_CACTUS;
		theType.mCost = 125;
		theType.mRechargeTime = 750;
	}
);

const auto &BLOVER = RegisterTypeOf<Plant>(
	"PVZ", "BLOVER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_BLOVER;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &SPLIT_PEA = RegisterTypeOf<Plant>(
	"PVZ", "SPLIT_PEA",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SPLITPEA;
		theType.mCost = 125;
		theType.mRechargeTime = 750;
	}
);

const auto &STARFRUIT = RegisterTypeOf<Plant>(
	"PVZ", "STARFRUIT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_STARFRUIT;
		theType.mCost = 125;
		theType.mRechargeTime = 750;
	}
);

const auto &PUMPKIN = RegisterTypeOf<Plant>(
	"PVZ", "PUMPKIN",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_PUMPKIN;
		theType.mCost = 125;
		theType.mRechargeTime = 3000;
	}
);

const auto &MAGNET_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "MAGNET_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_MAGNETSHROOM;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &CABBAGE_PULT = RegisterTypeOf<Plant>(
	"PVZ", "CABBAGE_PULT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_CABBAGEPULT;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &FLOWER_POT = RegisterTypeOf<Plant>(
	"PVZ", "FLOWER_POT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_FLOWER_POT;
		theType.mCost = 25;
		theType.mRechargeTime = 750;
	}
);

const auto &KERNEL_PULT = RegisterTypeOf<Plant>(
	"PVZ", "KERNEL_PULT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_KERNELPULT;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &COFFEE_BEAN = RegisterTypeOf<Plant>(
	"PVZ", "COFFEE_BEAN",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_COFFEEBEAN;
		theType.mCost = 75;
		theType.mRechargeTime = 750;
	}
);

const auto &GARLIC = RegisterTypeOf<Plant>(
	"PVZ", "GARLIC",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_GARLIC;
		theType.mCost = 50;
		theType.mRechargeTime = 750;
	}
);

const auto &UMBRELLA_LEAF = RegisterTypeOf<Plant>(
	"PVZ", "UMBRELLA_LEAF",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_UMBRELLALEAF;
		theType.mCost = 100;
		theType.mRechargeTime = 750;
	}
);

const auto &MARIGOLD = RegisterTypeOf<Plant>(
	"PVZ", "MARIGOLD",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_MARIGOLD;
		theType.mCost = 50;
		theType.mRechargeTime = 3000;
	}
);

const auto &MELON_PULT = RegisterTypeOf<Plant>(
	"PVZ", "MELON_PULT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_MELONPULT;
		theType.mCost = 300;
		theType.mRechargeTime = 750;
	}
);

const auto &GATLING_PEA = RegisterTypeOf<Plant>(
	"PVZ", "GATLING_PEA",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_GATLINGPEA;
		theType.mCost = 250;
		theType.mRechargeTime = 5000;
	}
);

const auto &TWIN_SUNFLOWER = RegisterTypeOf<Plant>(
	"PVZ", "TWIN_SUNFLOWER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TWIN_SUNFLOWER;
		theType.mCost = 150;
		theType.mRechargeTime = 5000;
	}
);

const auto &GLOOM_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "GLOOM_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TWIN_SUNFLOWER;
		theType.mCost = 150;
		theType.mRechargeTime = 5000;
	}
);

const auto &GLOOM_SHROOM = RegisterTypeOf<Plant>(
	"PVZ", "GLOOM_SHROOM",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_GLOOMSHROOM;
		theType.mCost = 150;
		theType.mRechargeTime = 5000;
	}
);

const auto &CATTAIL = RegisterTypeOf<Plant>(
	"PVZ", "CATTAIL",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_TWIN_SUNFLOWER;
		theType.mCost = 225;
		theType.mRechargeTime = 5000;
	}
);

const auto &WINTER_MELON =  RegisterTypeOf<Plant>(
	"PVZ", "WINTER_MELON",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_WINTER_MELON;
		theType.mCost = 200;
		theType.mRechargeTime = 5000;
	}
);

const auto &GOLD_MAGNET = RegisterTypeOf<Plant>(
	"PVZ", "GOLD_MAGNET",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_GOLD_MAGNET;
		theType.mCost = 50;
		theType.mRechargeTime = 5000;
	}
);

const auto &SPIKEROCK = RegisterTypeOf<Plant>(
	"PVZ", "SPIKEROCK",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_SPIKEROCK;
		theType.mCost = 125;
		theType.mRechargeTime = 5000;
	}
);

const auto &COB_CANNON = RegisterTypeOf<Plant>(
	"PVZ", "COB_CANNON",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_COBCANNON;
		theType.mCost = 500;
		theType.mRechargeTime = 5000;
	}
);

const auto &IMITATER = RegisterTypeOf<Plant>(
	"PVZ", "IMITATER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_IMITATER;
		theType.mCost = 0;
		theType.mRechargeTime = 750;
	}
);

const auto &EXPLODE_O_NUT = RegisterTypeOf<Plant>(
	"PVZ", "EXPLODE_O_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_WALLNUT;
		theType.mCost = 0;
		theType.mRechargeTime = 3000;
	}
);

const auto &GIANT_WALL_NUT = RegisterTypeOf<Plant>(
	"PVZ", "GIANT_WALL_NUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_WALLNUT;
		theType.mCost = 0;
		theType.mRechargeTime = 3000;
	}
);

const auto &SPROUT = RegisterTypeOf<Plant>(
	"PVZ", "SPROUT",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_ZENGARDEN_SPROUT;
		theType.mCost = 0;
		theType.mRechargeTime = 3000;
	}
);

const auto &LEFTPEATER = RegisterTypeOf<Plant>(
	"PVZ", "LEFTPEATER",
	{
	},
	[](PlantType &theType, PlantAttributes &theAttributes)
	{
		theType.mBaseReanim = ReanimationType::REANIM_REPEATER;
		theType.mCost = 200;
		theType.mRechargeTime = 750;
	}
);

const PlantType &FromOldSeedType(SeedType theSeedType)
{
	return Registries::PLANTS.GetByNumericalId(theSeedType);
}

} // namespace PlantTypes