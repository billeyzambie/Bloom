#include "StoreItemBehaviorTypes.h"
#include "StoreItemBehaviorType.h"
#include "../Registries.h"

#include "MainStoreItemBehavior.h"
#include "ComingSoonBeforeNewGardensStoreItemBehavior.h"

namespace StoreItemBehaviorTypes
{

const auto &MAIN = RegisterTypeOf<MainStoreItemBehavior>("PVZ", "MAIN", {});

const auto &COMING_SOON_BEFORE_NEW_GARDENS 
	= RegisterTypeOf<ComingSoonBeforeNewGardensStoreItemBehavior>(
		"PVZ",
		"COMING_SOON_BEFORE_NEW_GARDENS", 
		{}
);


} // namespace StoreItemBehaviorTypes