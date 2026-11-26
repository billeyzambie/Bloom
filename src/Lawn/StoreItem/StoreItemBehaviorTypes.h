#pragma once

#include "StoreItemBehaviorType.h"
#include "../BloomLib/RegistryTypeHolder.h"

class MainStoreItemBehavior;
class ComingSoonBeforeNewGardensStoreItemBehavior;

namespace StoreItemBehaviorTypes
{

template <class T> using TypeHolder = RegistryTypeHolder<T, StoreItemBehaviorType>;

extern BLOOM_API const TypeHolder<MainStoreItemBehavior> &MAIN;
extern BLOOM_API const TypeHolder<ComingSoonBeforeNewGardensStoreItemBehavior> &COMING_SOON_BEFORE_NEW_GARDENS;

} // namespace StoreItemBehaviorTypes