#pragma once

#include "ProjectileType.h"
#include "../BloomLib/RegistryTypeHolder.h"

#define INCLUDE_CUSTOM_PROJECTILE_TEST

namespace ProjectileTypes
{

extern BLOOM_API const RegistryTypeHolder<ProjectileType> &PEA;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &SNOWPEA;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &CABBAGE;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &MELON;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &PUFF;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &WINTERMELON;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &FIREBALL;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &STAR;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &SPIKE;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &BASKETBALL;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &KERNEL;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &COBBIG;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &BUTTER;
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &ZOMBIE_PEA;

#ifdef INCLUDE_CUSTOM_PROJECTILE_TEST
extern BLOOM_API const RegistryTypeHolder<ProjectileType> &CUSTOM_TEST;
#endif

}