#pragma once

#include "StoreItemType.h"
#include "../BloomLib/RegistryTypeHolder.h"

#define INCLUDE_TEST_STORE_ITEM false

namespace StoreItemTypes
{

extern BLOOM_API const RegistryTypeHolder<StoreItemType> &GATLING_PEA;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &TWIN_SUNFLOWER;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &GLOOM_SHROOM;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &CATTAIL;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &WINTER_MELON;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &GOLD_MAGNET;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &SPIKEROCK;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &COB_CANNON;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &IMITATER;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &BONUS_LAWN_MOWER;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &POTTED_MARIGOLD_1;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &POTTED_MARIGOLD_2;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &POTTED_MARIGOLD_3;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &GOLD_WATERING_CAN;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &FERTILIZER;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &BUG_SPRAY;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &PHONOGRAPH;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &GARDENING_GLOVE;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &MUSHROOM_GARDEN;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &WHEEL_BARROW;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &STINKY_THE_SNAIL;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &PACKET_UPGRADE;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &POOL_CLEANER;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &ROOF_CLEANER;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &RAKE;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &AQUARIUM_GARDEN;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &CHOCOLATE;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &TREE_OF_WISDOM;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &TREE_FOOD;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &FIRST_AID;
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &PLANTS_VS_ZOMBIES;
#if INCLUDE_TEST_STORE_ITEM
extern BLOOM_API const RegistryTypeHolder<StoreItemType> &CUSTOM_TEST;
#endif
}

extern BLOOM_API std::array<const RegistryTypeHolder<StoreItemType> *, 8> gStoreItemSpots[NUM_STORE_PAGES];

BLOOM_API void ReplaceStoreItemSpot(int thePage, int theSpotIndex, const RegistryTypeHolder<StoreItemType> &theItemType);