#pragma once

#include "ProjectileType.h"
#include "../BloomLib/RegistryTypeHolder.h"

#define INCLUDE_CUSTOM_PROJECTILE_TEST

namespace ProjectileTypes
{

extern BLOOM_API const RegistryHolder<ProjectileType> &PEA;
extern BLOOM_API const RegistryHolder<ProjectileType> &SNOWPEA;
extern BLOOM_API const RegistryHolder<ProjectileType> &CABBAGE;
extern BLOOM_API const RegistryHolder<ProjectileType> &MELON;
extern BLOOM_API const RegistryHolder<ProjectileType> &PUFF;
extern BLOOM_API const RegistryHolder<ProjectileType> &WINTERMELON;
extern BLOOM_API const RegistryHolder<ProjectileType> &FIREBALL;
extern BLOOM_API const RegistryHolder<ProjectileType> &STAR;
extern BLOOM_API const RegistryHolder<ProjectileType> &SPIKE;
extern BLOOM_API const RegistryHolder<ProjectileType> &BASKETBALL;
extern BLOOM_API const RegistryHolder<ProjectileType> &KERNEL;
extern BLOOM_API const RegistryHolder<ProjectileType> &COBBIG;
extern BLOOM_API const RegistryHolder<ProjectileType> &BUTTER;
extern BLOOM_API const RegistryHolder<ProjectileType> &ZOMBIE_PEA;

#ifdef INCLUDE_CUSTOM_PROJECTILE_TEST
extern BLOOM_API const RegistryHolder<ProjectileType> &CUSTOM_TEST;
#endif

} // namespace ProjectileTypes