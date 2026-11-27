#include "StoreItemGroups.h"
#include "../Registries.h"

namespace StoreItemGroups
{

const auto &UPGRADES = RegisterTypeOf<StoreItemGroup>(
	"PVZ", "UPGRADES", {}
);

const auto &ZEN_GARDEN = RegisterTypeOf<StoreItemGroup>(
	"PVZ", "ZEN_GARDEN",
	{
		.mUnlockLevel = 44
	}
);

}