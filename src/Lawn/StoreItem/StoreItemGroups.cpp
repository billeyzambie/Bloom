#include "StoreItemGroups.h"
#include "../Registries.h"

namespace StoreItemGroups
{

const auto &SLOT_UPGRADES = Registries::STORE_ITEM_GROUPS.Register([]() {
	auto *aStoreItemGroup = new StoreItemGroup(PVZ, "slot_upgrades");
	return aStoreItemGroup;
});

}