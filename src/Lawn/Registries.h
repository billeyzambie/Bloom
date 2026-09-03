#pragma once

#include "../BloomLib/Registry.h"
#include "StoreItem/StoreItemType.h"
#include "StoreItem/StoreItemGroup.h"
#include "Projectile/ProjectileBehaviorType.h"
#include "Projectile/ProjectileType.h"

namespace Registries
{

BLOOM_GLOBAL Registry<StoreItemType> STORE_ITEMS;
BLOOM_GLOBAL Registry<StoreItemGroup> STORE_ITEM_GROUPS;
BLOOM_GLOBAL Registry<ProjectileBehaviorType> PROJECTILE_BEHAVIORS;
BLOOM_GLOBAL Registry<ProjectileType> PROJECTILES;

constexpr int NUM_REGISTRIES = 4;

extern BLOOM_API const std::array<IRegistry *, NUM_REGISTRIES> REGISTRIES;

}
