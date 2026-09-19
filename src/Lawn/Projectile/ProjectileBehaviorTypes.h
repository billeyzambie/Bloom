#pragma once

#include "ProjectileBehaviorType.h"
#include "../BloomLib/RegistryTypeHolder.h"

class MainProjectileBehavior;
class ApplyButterProjectileBehavior;
class SplashProjectileBehavior;
class FireProjectileBehavior;
class HomingProjectileBehavior;
class TestProjectileBehavior;

namespace ProjectileBehaviorTypes
{

template <class T> using TypeHolder = RegistryTypeHolder<T, ProjectileBehaviorType>;

extern BLOOM_API const TypeHolder<MainProjectileBehavior> &MAIN;
extern BLOOM_API const TypeHolder<ApplyButterProjectileBehavior> &APPLY_BUTTER;
extern BLOOM_API const TypeHolder<SplashProjectileBehavior> &MELON_SPLASH;
extern BLOOM_API const TypeHolder<FireProjectileBehavior> &FIRE;
extern BLOOM_API const TypeHolder<HomingProjectileBehavior> &HOMING;
extern BLOOM_API const TypeHolder<TestProjectileBehavior> &TEST;

} // namespace ProjectileBehaviorTypes