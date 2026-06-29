#include "StoreItemTypes.h"
#include "Registries.h"

#include "System/PlayerInfo.h"

namespace StoreItemTypes
{

const auto &GATLING_PEA = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new StoreItemType(PVZ, "gatling_pea", anAttributes);
	return aStoreItemType;
});

const auto &TWIN_SUNFLOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 500;
	auto *aStoreItemType = new StoreItemType(PVZ, "twin_sunflower", anAttributes);
	return aStoreItemType;
});

const auto &GLOOM_SHROOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	auto *aStoreItemType = new StoreItemType(PVZ, "gloom_shroom", anAttributes);
	return aStoreItemType;
});

const auto &CATTAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	auto *aStoreItemType = new StoreItemType(PVZ, "cattail", anAttributes);
	return aStoreItemType;
});

const auto &WINTER_MELON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	auto *aStoreItemType = new StoreItemType(PVZ, "wintermelon", anAttributes);
	return aStoreItemType;
});

const auto &GOLD_MAGNET = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	auto *aStoreItemType = new StoreItemType(PVZ, "gold_magnet", anAttributes);
	return aStoreItemType;
});

const auto &SPIKEROCK = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 750;
	auto *aStoreItemType = new StoreItemType(PVZ, "spikerock", anAttributes);
	return aStoreItemType;
});

const auto &COB_CANNON = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 2000;
	auto *aStoreItemType = new StoreItemType(PVZ, "cob_cannon", anAttributes);
	return aStoreItemType;
});

const auto &IMITATER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	auto *aStoreItemType = new StoreItemType(PVZ, "imitater", anAttributes);
	return aStoreItemType;
});

const auto &BONUS_LAWN_MOWER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 0;
	auto *aStoreItemType = new StoreItemType(PVZ, "bonus_lawn_mower", anAttributes);	//what even is this
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_1 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new StoreItemType(PVZ, "potted_marigold_1", anAttributes);
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_2 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new StoreItemType(PVZ, "potted_marigold_2", anAttributes);
	return aStoreItemType;
});

const auto &POTTED_MARIGOLD_3 = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new StoreItemType(PVZ, "potted_marigold_3", anAttributes);
	return aStoreItemType;
});

const auto &GOLD_WATERING_CAN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	auto *aStoreItemType = new StoreItemType(PVZ, "gold_watering_can", anAttributes);
	return aStoreItemType;
});

const auto &FERTILIZER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 75;
	auto *aStoreItemType = new StoreItemType(PVZ, "fertilizer", anAttributes);
	return aStoreItemType;
});

const auto &BUG_SPRAY = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	auto *aStoreItemType = new StoreItemType(PVZ, "bug_spray", anAttributes);
	return aStoreItemType;
});

const auto &PHONOGRAPH = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1500;
	auto *aStoreItemType = new StoreItemType(PVZ, "phonograph", anAttributes);
	return aStoreItemType;
});

const auto &GARDENING_GLOVE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	auto *aStoreItemType = new StoreItemType(PVZ, "gardening_glove", anAttributes);
	return aStoreItemType;
});

const auto &MUSHROOM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	auto *aStoreItemType = new StoreItemType(PVZ, "mushroom_garden", anAttributes);
	return aStoreItemType;
});

const auto &WHEEL_BARROW = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 20;
	auto *aStoreItemType = new StoreItemType(PVZ, "wheel_barrow", anAttributes);
	return aStoreItemType;
});

const auto &STINKY_THE_SNAIL = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	auto *aStoreItemType = new StoreItemType(PVZ, "stinky_the_snail", anAttributes);
	return aStoreItemType;
});

const auto &PACKET_UPGRADE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 75;
	auto *aStoreItemType = new StoreItemType(PVZ, "packet_upgrade", anAttributes);

	aStoreItemType->mModifiers.Add([](StoreItemModifierContext &theContext) {
		int aPurchase = theContext.mPlayerInfo.mPurchases[PACKET_UPGRADE.Get()];
		int aTargetPrice = aPurchase == 0 ? 75 : aPurchase == 1 ? 500 : aPurchase == 2 ? 2000 : 8000;
		theContext.mAttributes.mCost *= aTargetPrice / 75.0f;
	});

	return aStoreItemType;
});

const auto &POOL_CLEANER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 100;
	auto *aStoreItemType = new StoreItemType(PVZ, "pool_cleaner", anAttributes);
	return aStoreItemType;
});

const auto &ROOF_CLEANER = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 300;
	auto *aStoreItemType = new StoreItemType(PVZ, "roof_cleaner", anAttributes);
	return aStoreItemType;
});

const auto &RAKE = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 20;
	auto *aStoreItemType = new StoreItemType(PVZ, "rake", anAttributes);
	return aStoreItemType;
});

const auto &AQUARIUM_GARDEN = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 3000;
	auto *aStoreItemType = new StoreItemType(PVZ, "aquarium_garden", anAttributes);
	return aStoreItemType;
});

const auto &CHOCOLATE = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "chocolate", {});
	return aStoreItemType;
});

const auto &TREE_OF_WISDOM = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 1000;
	auto *aStoreItemType = new StoreItemType(PVZ, "tree_of_wisdom", anAttributes);
	return aStoreItemType;
});

const auto &TREE_FOOD = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 250;
	auto *aStoreItemType = new StoreItemType(PVZ, "tree_food", anAttributes);
	return aStoreItemType;
});

const auto &FIRST_AID = Registries::STORE_ITEMS.Register([]() {
	StoreItemAttributes anAttributes;
	anAttributes.mCost = 200;
	auto *aStoreItemType = new StoreItemType(PVZ, "first_aid", anAttributes);
	return aStoreItemType;
});

const auto &PLANTS_VS_ZOMBIES = Registries::STORE_ITEMS.Register([]() {
	auto *aStoreItemType = new StoreItemType(PVZ, "pvz", {});
	return aStoreItemType;
});

} // namespace StoreItemTypes