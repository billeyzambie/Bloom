#pragma once

#include "StoreItemBehaviorType.h"
#include "../BloomLib/RegistryTypeHolder.h"

class MainStoreItemBehavior;
class ComingSoonBeforeNewGardensStoreItemBehavior;
class ComingSoonBeforeLevelStoreItemBehavior;
class PottedPlantStoreItemBehavior;

namespace StoreItemBehaviorTypes
{

template <class T> using TypeHolder = RegistryTypeHolder<T, StoreItemBehaviorType>;

extern BLOOM_API const TypeHolder<MainStoreItemBehavior> &MAIN;
extern BLOOM_API const TypeHolder<ComingSoonBeforeNewGardensStoreItemBehavior> &COMING_SOON_BEFORE_NEW_GARDENS;
extern BLOOM_API const TypeHolder<ComingSoonBeforeLevelStoreItemBehavior> &COMING_SOON_UNTIL_ADVENTURE_FINISHED;
extern BLOOM_API const TypeHolder<PottedPlantStoreItemBehavior> &POTTED_MARIGOLD;

} // namespace StoreItemBehaviorTypes