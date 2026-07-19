#pragma once

#include "../BloomLib/Registry.h"
#include "StoreItem/StoreItemType.h"
#include "StoreItem/StoreItemGroup.h"

namespace Registries
{

BLOOM_GLOBAL Registry<StoreItemType> STORE_ITEMS;

BLOOM_GLOBAL Registry<StoreItemGroup> STORE_ITEM_GROUPS;

constexpr int NUM_REGISTRIES = 2;

extern BLOOM_API const std::array<IRegistry *, NUM_REGISTRIES> REGISTRIES;

}
