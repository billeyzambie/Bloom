#pragma once

#include "StoreItemType.h"
#include "../BloomLib/RegistryTypeHolder.h"

namespace StoreItemTypes
{

extern BLOOM_API const RegistryHolder<StoreItemType> &GATLING_PEA;
extern BLOOM_API const RegistryHolder<StoreItemType> &TWIN_SUNFLOWER;
extern BLOOM_API const RegistryHolder<StoreItemType> &GLOOM_SHROOM;
extern BLOOM_API const RegistryHolder<StoreItemType> &CATTAIL;
extern BLOOM_API const RegistryHolder<StoreItemType> &WINTER_MELON;
extern BLOOM_API const RegistryHolder<StoreItemType> &GOLD_MAGNET;
extern BLOOM_API const RegistryHolder<StoreItemType> &SPIKEROCK;
extern BLOOM_API const RegistryHolder<StoreItemType> &COB_CANNON;
extern BLOOM_API const RegistryHolder<StoreItemType> &IMITATER;
extern BLOOM_API const RegistryHolder<StoreItemType> &BONUS_LAWN_MOWER;
extern BLOOM_API const RegistryHolder<StoreItemType> &POTTED_MARIGOLD_1;
extern BLOOM_API const RegistryHolder<StoreItemType> &POTTED_MARIGOLD_2;
extern BLOOM_API const RegistryHolder<StoreItemType> &POTTED_MARIGOLD_3;
extern BLOOM_API const RegistryHolder<StoreItemType> &GOLD_WATERING_CAN;
extern BLOOM_API const RegistryHolder<StoreItemType> &FERTILIZER;
extern BLOOM_API const RegistryHolder<StoreItemType> &BUG_SPRAY;
extern BLOOM_API const RegistryHolder<StoreItemType> &PHONOGRAPH;
extern BLOOM_API const RegistryHolder<StoreItemType> &GARDENING_GLOVE;
extern BLOOM_API const RegistryHolder<StoreItemType> &MUSHROOM_GARDEN;
extern BLOOM_API const RegistryHolder<StoreItemType> &WHEEL_BARROW;
extern BLOOM_API const RegistryHolder<StoreItemType> &STINKY_THE_SNAIL;
extern BLOOM_API const RegistryHolder<StoreItemType> &PACKET_UPGRADE;
extern BLOOM_API const RegistryHolder<StoreItemType> &POOL_CLEANER;
extern BLOOM_API const RegistryHolder<StoreItemType> &ROOF_CLEANER;
extern BLOOM_API const RegistryHolder<StoreItemType> &RAKE;
extern BLOOM_API const RegistryHolder<StoreItemType> &AQUARIUM_GARDEN;
extern BLOOM_API const RegistryHolder<StoreItemType> &CHOCOLATE;
extern BLOOM_API const RegistryHolder<StoreItemType> &TREE_OF_WISDOM;
extern BLOOM_API const RegistryHolder<StoreItemType> &TREE_FOOD;
extern BLOOM_API const RegistryHolder<StoreItemType> &FIRST_AID;
extern BLOOM_API const RegistryHolder<StoreItemType> &PLANTS_VS_ZOMBIES;
#ifdef INCLUDE_TEST_STORE_ITEM
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &CUSTOM_TEST;
#endif
}

extern BLOOM_API std::array<const RegistryHolder<StoreItemType> *, 8> gOldStoreItemSpots[NUM_STORE_PAGES];