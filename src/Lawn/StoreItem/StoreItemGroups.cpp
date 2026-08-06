#include "StoreItemGroups.h"
#include "../Registries.h"

namespace StoreItemGroups
{

const auto &UPGRADES = Registries::STORE_ITEM_GROUPS.Register([]() {
	auto *aStoreItemGroup = new StoreItemGroup("PVZ", "upgrades");
	return aStoreItemGroup;
});

const auto &ZEN_GARDEN = Registries::STORE_ITEM_GROUPS.Register([]() {
	StoreItemGroupAttributes anAttributes;
	anAttributes.mUnlockLevel = 44;
	auto *aStoreItemGroup = new StoreItemGroup("PVZ", "zen_garden", anAttributes);
	return aStoreItemGroup;
});

}