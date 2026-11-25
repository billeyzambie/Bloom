#pragma once

#include "StoreItemBehaviorType.h"
#include "../BloomLib/RegistryTypeHolder.h"

class MainStoreItemBehavior;

namespace StoreItemBehaviorTypes
{

template <class T> using TypeHolder = RegistryTypeHolder<T, StoreItemBehaviorType>;

extern BLOOM_API const TypeHolder<MainStoreItemBehavior> &MAIN;

} // namespace StoreItemBehaviorTypes