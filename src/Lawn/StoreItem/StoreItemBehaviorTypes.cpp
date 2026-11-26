#include "StoreItemBehaviorTypes.h"
#include "StoreItemBehaviorType.h"
#include "../Registries.h"
#include "../Actor/PlantTypes.h"

#include "MainStoreItemBehavior.h"
#include "ComingSoonBeforeNewGardensStoreItemBehavior.h"
#include "ComingSoonBeforeLevelStoreItemBehavior.h"
#include "PottedPlantStoreItemBehavior.h"

namespace StoreItemBehaviorTypes
{

const auto &MAIN = RegisterTypeOf<MainStoreItemBehavior>("PVZ", "MAIN", {});

const auto &COMING_SOON_BEFORE_NEW_GARDENS 
	= RegisterTypeOf<ComingSoonBeforeNewGardensStoreItemBehavior>(
		"PVZ",
		"COMING_SOON_BEFORE_NEW_GARDENS", 
		{}
);

const auto &COMING_SOON_UNTIL_ADVENTURE_FINISHED 
	= RegisterTypeOf<ComingSoonBeforeLevelStoreItemBehavior>(
		"PVZ",
		"COMING_SOON_UNTIL_ADVENTURE_FINISHED",
		{
			.mLevel = 50
		}
);

const auto &POTTED_MARIGOLD = RegisterTypeOf<PottedPlantStoreItemBehavior>(
	"PVZ",
	"POTTED_MARIGOLD", 
	{},
	[](TypeOf<PottedPlantStoreItemBehavior> &theType, StoreItemBehaviorAttributes &theAttributes)
	{
		theType.mPlantType = PlantTypes::MARIGOLD;
	}
);

} // namespace StoreItemBehaviorTypes