#pragma once

#include "../BloomLib/Registry.h"
#include "StoreItemType.h"

namespace Registries
{

BLOOM_GLOBAL Registry<StoreItemType> STORE_ITEMS;

constexpr int NUM_REGISTRIES = 1;

extern BLOOM_API const std::array<IRegistry *, NUM_REGISTRIES> REGISTRIES;

}
