#include "ComingSoonBeforeOthersStoreItemBehavior.h"
#include "../../Board.h"
#include "../../../LawnApp.h"
#include "../../../Sexy.TodLib/TodDebug.h"

void ComingSoonBeforeOthersStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	bool anAnyAvailable = false;
	StoreItem &aStoreItem = theContext.mStoreItem;

	const Type &aType = static_cast<const Type &>(mType);
	
	for (const StoreItemType *anItemType : aType.mOthers)
	{
		TOD_ASSERT(
			anItemType,
			"nullptr got added to ComingSoonBeforeOthersStoreItemBehaviorType::mOthers"
		);

		if (!theContext.mPlayerInfo.GetStoreItem(*anItemType).mAttributes.mUnavailable)
			anAnyAvailable = true;
	}

	if (!anAnyAvailable)
		aStoreItem.mAttributes.mComingSoon = true;
}