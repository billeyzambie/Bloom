#include "StoreItemTypes.h"
#include "Registries.h"

namespace StoreItemTypes
{

const auto &GATLING_PEA = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "gatling_pea");
	aStoreItemType->mCost = 500;
	return aStoreItemType;
});

const auto &TWIN_SUNFLOWER = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "twin_sunflower");
	aStoreItemType->mCost = 500;
	return aStoreItemType;
});

const auto &GLOOM_SHROOM = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "gloom_shroom");
	aStoreItemType->mCost = 750;
	return aStoreItemType;
});

const auto &CATTAIL = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "cattail");
	aStoreItemType->mCost = 1000;
	return aStoreItemType;
});

const auto &WINTER_MELON = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "wintermelon");
	aStoreItemType->mCost = 1000;
	return aStoreItemType;
});

const auto &GOLD_MAGNET = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "gold_magnet");
	aStoreItemType->mCost = 300;
	return aStoreItemType;
});

const auto &SPIKEROCK = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "spikerock");
	aStoreItemType->mCost = 750;
	return aStoreItemType;
});

const auto &COB_CANNON = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "cob_cannon");
	aStoreItemType->mCost = 2000;
	return aStoreItemType;
});

const auto &IMITATER = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "imitater");
	aStoreItemType->mCost = 3000;
	return aStoreItemType;
});

const auto &BONUS_LAWN_MOWER = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "bonus_lawn_mower");
	aStoreItemType->mCost = 0; //what even is this
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_1 = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "potted_marigold_1");
	aStoreItemType->mCost = 250;
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_2 = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "potted_marigold_2");
	aStoreItemType->mCost = 250;
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_3 = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "potted_marigold_3");
	aStoreItemType->mCost = 250;
	return aStoreItemType;
});

const auto &GOLD_WATERING_CAN = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "gold_watering_can");
	aStoreItemType->mCost = 1000;
	return aStoreItemType;
});

const auto &FERTILIZER = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "fertilizer");
	aStoreItemType->mCost = 75;
	return aStoreItemType;
});

const auto &BUG_SPRAY = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "bug_spray");
	aStoreItemType->mCost = 100;
	return aStoreItemType;
});

const auto &PHONOGRAPH = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "phonograph");
	aStoreItemType->mCost = 1500;
	return aStoreItemType;
});

const auto &GARDENING_GLOVE = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "gardening_glove");
	aStoreItemType->mCost = 100;
	return aStoreItemType;
});

const auto &MUSHROOM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "mushroom_garden");
	aStoreItemType->mCost = 3000;
	return aStoreItemType;
});

const auto &WHEEL_BARROW = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "wheel_barrow");
	aStoreItemType->mCost = 20;
	return aStoreItemType;
});

const auto &STINKY_THE_SNAIL = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "stinky_the_snail");
	aStoreItemType->mCost = 300;
	return aStoreItemType;
});

const auto &PACKET_UPGRADE = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "packet_upgrade");
	aStoreItemType->mCost = 75;
	return aStoreItemType;
});

const auto &POOL_CLEANER = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "pool_cleaner");
	aStoreItemType->mCost = 100;
	return aStoreItemType;
});

const auto &ROOF_CLEANER = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "roof_cleaner");
	aStoreItemType->mCost = 300;
	return aStoreItemType;
});

const auto &RAKE = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "rake");
	aStoreItemType->mCost = 20;
	return aStoreItemType;
});

const auto &AQUARIUM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "aquarium_garden");
	aStoreItemType->mCost = 3000;
	return aStoreItemType;
});

const auto &CHOCOLATE = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "chocolate");
	return aStoreItemType;
});

const auto &TREE_OF_WISDOM = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "tree_of_wisdom");
	aStoreItemType->mCost = 1000;
	return aStoreItemType;
});

const auto &TREE_FOOD = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "tree_food");
	aStoreItemType->mCost = 250;
	return aStoreItemType;
});

const auto &FIRST_AID = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "first_aid");
	aStoreItemType->mCost = 200;
	return aStoreItemType;
});

const auto &PLANTS_VS_ZOMBIES = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "pvz");
	return aStoreItemType;
});

} // namespace StoreItemTypes