#pragma once

#include "ProjectileBehaviorType.h"
#include "../BloomLib/RegistryTypeHolder.h"

class MainProjectileBehavior;
class ApplyButterProjectileBehavior;
class SplashProjectileBehavior;
class FireProjectileBehavior;
class HomingProjectileBehavior;

namespace ProjectileBehaviorTypes
{

template <class T> using Holder = RegistryTypeHolder<T, ProjectileBehaviorType>;

extern BLOOM_API const Holder<MainProjectileBehavior> &MAIN;
extern BLOOM_API const Holder<ApplyButterProjectileBehavior> &APPLY_BUTTER;
extern BLOOM_API const Holder<SplashProjectileBehavior> &MELON_SPLASH;
extern BLOOM_API const Holder<FireProjectileBehavior> &FIRE;
extern BLOOM_API const Holder<HomingProjectileBehavior> &HOMING;

extern BLOOM_API const RegistryHolder<ProjectileBehaviorType> &TEST;

} // namespace ProjectileBehaviorTypes