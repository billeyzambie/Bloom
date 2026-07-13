#pragma once

#include "../BloomLib/Registry.h"
#include "StoreItem/StoreItemType.h"

namespace Registries
{

BLOOM_GLOBAL Registry<GroupTab<StoreItemType>> STORE_ITEM_GROUPS;

BLOOM_GLOBAL Registry<StoreItemType> STORE_ITEMS;

constexpr int NUM_REGISTRIES = 2;

extern BLOOM_API const std::array<IRegistry *, NUM_REGISTRIES> REGISTRIES;

}
