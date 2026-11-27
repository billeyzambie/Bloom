#include "ComingSoonBeforeNewGardensStoreItemBehavior.h"
#include "../../Board.h"
#include "../../../LawnApp.h"
#include "../StoreItemTypes.h"

void ComingSoonBeforeNewGardensStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	bool anAnyAvailable = 
		theContext.mPlayerInfo.GetStoreItem(StoreItemTypes::MUSHROOM_GARDEN).mPurchases 
		|| theContext.mPlayerInfo.GetStoreItem(StoreItemTypes::AQUARIUM_GARDEN).mPurchases;
	if (!anAnyAvailable)
		theContext.mStoreItem.mAttributes.mComingSoon = true;
}