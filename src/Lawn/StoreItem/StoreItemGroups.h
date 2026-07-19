#pragma once

#include "StoreItemGroup.h"
#include "../BloomLib/RegistryTypeHolder.h"

#define INCLUDE_TEST_STORE_ITEM true

namespace StoreItemGroups
{

extern BLOOM_API const RegistryTypeHolder<StoreItemGroup> &SLOT_UPGRADES;
extern BLOOM_API const RegistryTypeHolder<StoreItemGroup> &PLANT_UPGRADES;
extern BLOOM_API const RegistryTypeHolder<StoreItemGroup> &ZEN_GARDEN;

}