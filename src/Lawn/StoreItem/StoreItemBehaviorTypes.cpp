#include "StoreItemBehaviorTypes.h"
#include "StoreItemBehaviorType.h"
#include "../Registries.h"

#include "MainStoreItemBehavior.h"

namespace StoreItemBehaviorTypes
{

const auto &MAIN = RegisterTypeOf<MainStoreItemBehavior>("PVZ", "MAIN", {});

} // namespace StoreItemBehaviorTypes