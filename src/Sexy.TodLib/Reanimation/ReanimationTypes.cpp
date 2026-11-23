#include "ReanimationTypes.h"
#include "Reanimator.h"
#include "../Lawn/Registries.h"

namespace ReanimationTypes
{

const auto &LOAD_BAR_SPROUT = RegisterTypeOf<Reanimation>(
	"PVZ", "LOADBAR_SPROUT",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &LOAD_BAR_ZOMBIE_HEAD = RegisterTypeOf<Reanimation>(
	"PVZ", "LOADBAR_ZOMBIEHEAD",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &SOD_ROLL = RegisterTypeOf<Reanimation>(
	"PVZ", "SODROLL",
	{
	}
);

const auto &FINAL_WAVE = RegisterTypeOf<Reanimation>(
	"PVZ", "FINALWAVE",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &PEASHOOTER = RegisterTypeOf<Reanimation>(
	"PVZ", "PEASHOOTER",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mFile = {"PVZ", "reanim/PeaShooterSingle.reanim"};
		theType.mPlantHasSeparateHead = true;
	}
);

const auto &WALL_NUT = RegisterTypeOf<Reanimation>(
	"PVZ", "WALLNUT",
	{
	}
);

const auto &LILY_PAD = RegisterTypeOf<Reanimation>(
	"PVZ", "LILYPAD",
	{
	}
);

const auto &SUNFLOWER = RegisterTypeOf<Reanimation>(
	"PVZ", "SUNFLOWER",
	{
	}
);

const auto &LAWN_MOWER = RegisterTypeOf<Reanimation>(
	"PVZ", "LAWNMOWER",
	{
	}
);

const auto &READY_SET_PLANT = RegisterTypeOf<Reanimation>(
	"PVZ", "READY_SET_PLANT",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mFile = {"PVZ", "reanim/StartReadySetPlant.reanim"};
		theType.mNoAtlas = true;
	}
);

const auto &CHERRY_BOMB = RegisterTypeOf<Reanimation>(
	"PVZ", "CHERRYBOMB",
	{
	}
);

const auto &SQUASH = RegisterTypeOf<Reanimation>(
	"PVZ", "SQUASH",
	{
	}
);

const auto &DOOM_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "DOOMSHROOM",
	{
	}
);

const auto &SNOW_PEA = RegisterTypeOf<Reanimation>(
	"PVZ", "SNOWPEA",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mPlantHasSeparateHead = true;
	}
);

const auto &REPEATER = RegisterTypeOf<Reanimation>(
	"PVZ", "REPEATER",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mFile = {"PVZ", "reanim/PeaShooter.reanim"};
		theType.mPlantHasSeparateHead = true;
	}
);

const auto &SUN_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "SUNSHROOM",
	{
	}
);

const auto &TALL_NUT = RegisterTypeOf<Reanimation>(
	"PVZ", "TALLNUT",
	{
	}
);

const auto &FUME_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "FUMESHROOM",
	{
	}
);

const auto &PUFF_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "PUFFSHROOM",
	{
	}
);

const auto &HYPNO_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "HYPNOSHROOM",
	{
	}
);

const auto &CHOMPER = RegisterTypeOf<Reanimation>(
	"PVZ", "CHOMPER",
	{
	}
);

const auto &ZOMBIE = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE",
	{
	}
);

const auto &SUN = RegisterTypeOf<Reanimation>(
	"PVZ", "SUN",
	{
	}
);

const auto &POTATO_MINE = RegisterTypeOf<Reanimation>(
	"PVZ", "POTATOMINE",
	{
	}
);

const auto &SPIKEWEED = RegisterTypeOf<Reanimation>(
	"PVZ", "CALTROP",
	{
	}
);

const auto &SPIKEROCK = RegisterTypeOf<Reanimation>(
	"PVZ", "SPIKEROCK",
	{
	}
);

const auto &THREEPEATER = RegisterTypeOf<Reanimation>(
	"PVZ", "THREEPEATER",
	{
	}
);

const auto &MARIGOLD = RegisterTypeOf<Reanimation>(
	"PVZ", "MARIGOLD",
	{
	}
);

const auto &ICE_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "ICESHROOM",
	{
	}
);

const auto &ZOMBIE_FOOTBALL = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_FOOTBALL",
	{
	}
);

const auto &ZOMBIE_NEWSPAPER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_PAPER",
	{
	}
);

const auto &ZOMBIE_ZAMBONI = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_ZAMBONI",
	{
	}
);

const auto &SPLASH = RegisterTypeOf<Reanimation>(
	"PVZ", "SPLASH",
	{
	}
);

const auto &JALAPENO = RegisterTypeOf<Reanimation>(
	"PVZ", "JALAPENO",
	{
	}
);

const auto &JALAPENO_FIRE = RegisterTypeOf<Reanimation>(
	"PVZ", "JALAPENO_FIRE",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mFile = {"PVZ", "reanim/fire.reanim"};
	}
);

const auto &COIN_SILVER = RegisterTypeOf<Reanimation>(
	"PVZ", "COIN_SILVER",
	{
	}
);

const auto &ZOMBIE_CHARRED = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CHARRED",
	{
	}
);

const auto &ZOMBIE_CHARRED_IMP = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CHARRED_IMP",
	{
	}
);

const auto &ZOMBIE_CHARRED_DIGGER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CHARRED_DIGGER",
	{
	}
);

const auto &ZOMBIE_CHARRED_ZAMBONI = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CHARRED_ZAMBONI",
	{
	}
);

const auto &ZOMBIE_CHARRED_CATAPULT = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CHARRED_CATAPULT",
	{
	}
);

const auto &ZOMBIE_CHARRED_GARGANTUAR = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CHARRED_GARGANTUAR",
	{
	}
);

const auto &SCAREDY_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "SCAREDYSHROOM",
	{
	}
);

const auto &PUMPKIN = RegisterTypeOf<Reanimation>(
	"PVZ", "PUMPKIN",
	{
	}
);

const auto &PLANTERN = RegisterTypeOf<Reanimation>(
	"PVZ", "PLANTERN",
	{
	}
);

const auto &TORCHWOOD = RegisterTypeOf<Reanimation>(
	"PVZ", "TORCHWOOD",
	{
	}
);

const auto &SPLIT_PEA = RegisterTypeOf<Reanimation>(
	"PVZ", "SPLITPEA",
	{
	}
);

const auto &SEA_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "SEASHROOM",
	{
	}
);

const auto &BLOVER = RegisterTypeOf<Reanimation>(
	"PVZ", "BLOVER",
	{
	}
);

const auto &FLOWER_POT = RegisterTypeOf<Reanimation>(
	"PVZ", "POT",
	{
	}
);

const auto &CACTUS = RegisterTypeOf<Reanimation>(
	"PVZ", "CACTUS",
	{
	}
);

const auto &DANCER = RegisterTypeOf<Reanimation>(
	"PVZ", "DANCER",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mFile = {"PVZ", "reanim/Zombie_disco.reanim"};
	}
);

const auto &TANGLE_KELP = RegisterTypeOf<Reanimation>(
	"PVZ", "TANGLEKELP",
	{
	}
);

const auto &STARFRUIT = RegisterTypeOf<Reanimation>(
	"PVZ", "STARFRUIT",
	{
	}
);

const auto &POLE_VAULTER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_POLEVAULTER",
	{
	}
);

const auto &BALLOON = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BALLOON",
	{
	}
);

const auto &GARGANTUAR = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_GARGANTUAR",
	{
	}
);

const auto &IMP = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_IMP",
	{
	}
);

const auto &DIGGER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_DIGGER",
	{
	}
);

const auto &DIGGER_DIRT = RegisterTypeOf<Reanimation>(
	"PVZ", "DIGGER_RISING_DIRT",
	{
	}
);

const auto &ZOMBIE_DOLPHIN_RIDER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_DOLPHINRIDER",
	{
	}
);

const auto &POGO = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_POGO",
	{
	}
);

const auto &BACKUP_DANCER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BACKUP",
	{
	}
);

const auto &BOBSLED = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BOBSLED",
	{
	}
);

const auto &JACK_IN_THE_BOX = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_JACKBOX",
	{
	}
);

const auto &SNORKEL = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_SNORKLE",
	{
	}
);

const auto &BUNGEE = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BUNGI",
	{
	}
);

const auto &CATAPULT = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_CATAPULT",
	{
	}
);

const auto &LADDER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_LADDER",
	{
	}
);

const auto &PUFF = RegisterTypeOf<Reanimation>(
	"PVZ", "PUFF",
	{
	}
);

const auto &SLEEPING = RegisterTypeOf<Reanimation>(
	"PVZ", "Z",
	{
	}
);

const auto &GRAVE_BUSTER = RegisterTypeOf<Reanimation>(
	"PVZ", "GRAVEBUSTER",
	{
	}
);

const auto &ZOMBIES_WON = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIESWON",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &MAGNET_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "MAGNETSHROOM",
	{
	}
);

const auto &BOSS = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BOSS",
	{
	}
);

const auto &CABBAGE_PULT = RegisterTypeOf<Reanimation>(
	"PVZ", "CABBAGEPULT",
	{
	}
);

const auto &KERNEL_PULT = RegisterTypeOf<Reanimation>(
	"PVZ", "CORNPULT",
	{
	}
);

const auto &MELON_PULT = RegisterTypeOf<Reanimation>(
	"PVZ", "MELONPULT",
	{
	}
);

const auto &COFFEE_BEAN = RegisterTypeOf<Reanimation>(
	"PVZ", "COFFEEBEAN",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &UMBRELLA_LEAF = RegisterTypeOf<Reanimation>(
	"PVZ", "UMBRELLALEAF",
	{
	}
);

const auto &GATLING_PEA = RegisterTypeOf<Reanimation>(
	"PVZ", "GATLINGPEA",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mPlantHasSeparateHead = true;
	}
);

const auto &CATTAIL = RegisterTypeOf<Reanimation>(
	"PVZ", "CATTAIL",
	{
	}
);

const auto &GLOOM_SHROOM = RegisterTypeOf<Reanimation>(
	"PVZ", "GLOOMSHROOM",
	{
	}
);

const auto &BOSS_ICEBALL = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BOSS_ICEBALL",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &BOSS_FIREBALL = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BOSS_FIREBALL",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &COB_CANNON = RegisterTypeOf<Reanimation>(
	"PVZ", "COBCANNON",
	{
	}
);

const auto &GARLIC = RegisterTypeOf<Reanimation>(
	"PVZ", "GARLIC",
	{
	}
);

const auto &GOLD_MAGNET = RegisterTypeOf<Reanimation>(
	"PVZ", "GOLDMAGNET",
	{
	}
);

const auto &WINTER_MELON = RegisterTypeOf<Reanimation>(
	"PVZ", "WINTERMELON",
	{
	}
);

const auto &TWIN_SUNFLOWER = RegisterTypeOf<Reanimation>(
	"PVZ", "TWINSUNFLOWER",
	{
	}
);

const auto &POOL_CLEANER = RegisterTypeOf<Reanimation>(
	"PVZ", "POOLCLEANER",
	{
	}
);

const auto &ROOF_CLEANER = RegisterTypeOf<Reanimation>(
	"PVZ", "ROOFCLEANER",
	{
	}
);

const auto &FIRE_PEA = RegisterTypeOf<Reanimation>(
	"PVZ", "FIREPEA",
	{
	}
);

const auto &IMITATER = RegisterTypeOf<Reanimation>(
	"PVZ", "IMITATER",
	{
	}
);

const auto &YETI = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_YETI",
	{
	}
);

const auto &BOSS_DRIVER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZOMBIE_BOSS_DRIVER",
	{
	}
);

const auto &LAWN_MOWERED_ZOMBIE = RegisterTypeOf<Reanimation>(
	"PVZ", "LAWNMOWEREDZOMBIE",
	{
	}
);

const auto &CRAZY_DAVE = RegisterTypeOf<Reanimation>(
	"PVZ", "CRAZYDAVE",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &TEXT_FADE_ON = RegisterTypeOf<Reanimation>(
	"PVZ", "TEXTFADEON",
	{
	}
);

const auto &HAMMER = RegisterTypeOf<Reanimation>(
	"PVZ", "HAMMER",
	{
	}
);

const auto &SLOT_MACHINE_HANDLE = RegisterTypeOf<Reanimation>(
	"PVZ", "SLOT_MACHINE",
	{
	}
);

const auto &CREDITS_FOOTBALL = RegisterTypeOf<Reanimation>(
	"PVZ", "CREDITS_FOOTBALL",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_JACKBOX = RegisterTypeOf<Reanimation>(
	"PVZ", "CREDITS_JACKBOX",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &SELECTOR_SCREEN = RegisterTypeOf<Reanimation>(
	"PVZ", "SELECTORSCREEN",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &PORTAL_CIRCLE = RegisterTypeOf<Reanimation>(
	"PVZ", "PORTAL_CIRCLE",
	{
	}
);

const auto &PORTAL_SQUARE = RegisterTypeOf<Reanimation>(
	"PVZ", "PORTAL_SQUARE",
	{
	}
);

const auto &ZEN_GARDEN_SPROUT = RegisterTypeOf<Reanimation>(
	"PVZ", "ZenGarden_sprout",
	{
	}
);

const auto &ZEN_GARDEN_WATERING_CAN = RegisterTypeOf<Reanimation>(
	"PVZ", "ZenGarden_wateringcan", 
	//took me too long to realize i can just copy paste them from Reanimation.cpp
	//can't bother uppercasing them now, they're case insensitive anyway
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &ZEN_GARDEN_FERTILIZER = RegisterTypeOf<Reanimation>(
	"PVZ", "ZenGarden_fertilizer",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &ZEN_GARDEN_BUG_SPRAY = RegisterTypeOf<Reanimation>(
	"PVZ", "ZenGarden_bugspray",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &ZEN_GARDEN_PHONOGRAPH = RegisterTypeOf<Reanimation>(
	"PVZ", "ZenGarden_phonograph",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &DIAMOND = RegisterTypeOf<Reanimation>(
	"PVZ", "Diamond",
	{
	}
);

const auto &ZOMBIE_HAND = RegisterTypeOf<Reanimation>(
	"PVZ", "Zombie_hand",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &STINKY = RegisterTypeOf<Reanimation>(
	"PVZ", "Stinky",
	{
	}
);

const auto &RAKE = RegisterTypeOf<Reanimation>(
	"PVZ", "Rake",
	{
	}
);

const auto &RAIN_CIRCLE = RegisterTypeOf<Reanimation>(
	"PVZ", "Rain_circle",
	{
	}
);

const auto &RAIN_SPLASH = RegisterTypeOf<Reanimation>(
	"PVZ", "Rain_splash",
	{
	}
);

const auto &ZOMBIE_SURPRISE = RegisterTypeOf<Reanimation>(
	"PVZ", "Zombie_surprise",
	{
	}
);

const auto &COIN_GOLD = RegisterTypeOf<Reanimation>(
	"PVZ", "Coin_gold",
	{
	}
);

const auto &TREE_OF_WISDOM = RegisterTypeOf<Reanimation>(
	"PVZ", "TreeOfWisdom",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &TREE_OF_WISDOM_CLOUDS = RegisterTypeOf<Reanimation>(
	"PVZ", "TreeOfWisdomClouds",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &TREE_OF_WISDOM_TREE_FOOD = RegisterTypeOf<Reanimation>(
	"PVZ", "TreeFood",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_MAIN = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Main",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_MAIN_2 = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Main2",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_MAIN_3 = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Main3",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &ZOMBIE_CREDITS_DANCE = RegisterTypeOf<Reanimation>(
	"PVZ", "Zombie_credits_dance",
	{
	}
);

const auto &CREDITS_STAGE = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_stage",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_BIG_BRAIN = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_BigBrain",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_FLOWER_PETALS = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Flower_petals",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_INFANTRY = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Infantry",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_THROAT = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Throat",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_CRAZY_DAVE = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_CrazyDave",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_BOSS_DANCE = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Bossdance",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &ZOMBIE_CREDITS_SCREEN_DOOR = RegisterTypeOf<Reanimation>(
	"PVZ", "Zombie_Credits_Screendoor",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &ZOMBIE_CREDITS_CONEHEAD = RegisterTypeOf<Reanimation>(
	"PVZ", "Zombie_Credits_Conehead",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_ZOMBIE_ARMY_1 = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_ZombieArmy1",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_ZOMBIE_ARMY_2 = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_ZombieArmy2",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_TOMB_STONES = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Tombstones",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_SOLAR_POWER = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_SolarPower",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_ANY_HOUR = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_Anyhour",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_WE_ARE_THE_UNDEAD = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_WeAreTheUndead",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &CREDITS_DISCO_LIGHTS = RegisterTypeOf<Reanimation>(
	"PVZ", "Credits_DiscoLights",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);

const auto &FLAG = RegisterTypeOf<Reanimation>(
	"PVZ", "Zombie_FlagPole",
	{
	}
);

const auto &ZOMBATAR_HEAD = RegisterTypeOf<Reanimation>(
	"PVZ", "zombatar_zombie_head",
	{
	},
	[](ReanimationType &theType, ReanimationAttributes &theAttributes)
	{
		theType.mNoAtlas = true;
	}
);


const auto &GOLD_BLOOM = RegisterTypeOf<Reanimation>(
	"PVZ", "GOLDBLOOM",
	{
	}
);

}