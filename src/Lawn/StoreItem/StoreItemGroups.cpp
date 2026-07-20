#include "StoreItemGroups.h"
#include "../Registries.h"

namespace StoreItemGroups
{

const auto &UPGRADES = Registries::STORE_ITEM_GROUPS.Register([]() {
	auto *aStoreItemGroup = new StoreItemGroup(PVZ, "upgrades");
	return aStoreItemGroup;
});

const auto &ZEN_GARDEN = Registries::STORE_ITEM_GROUPS.Register([]() {
	auto *aStoreItemGroup = new StoreItemGroup(PVZ, "zen_garden");
	return aStoreItemGroup;
});

//bool StoreScreen::IsPageShown(int thePage)
//{
//	if (mApp->IsTrialStageLocked())
//		return thePage == STORE_PAGE_SLOT_UPGRADES;
//	if (mApp->HasFinishedAdventure())
//		return true;
//	if (thePage == STORE_PAGE_PLANT_UPGRADES)
//		return mApp->mPlayerInfo->mLevel >= 42;
//	if (thePage == STORE_PAGE_ZEN1)
//		return mApp->mPlayerInfo->mLevel >= 45;
//	return thePage != STORE_PAGE_ZEN2;
//}

}