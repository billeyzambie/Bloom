#include "ComingSoonBeforeLevelStoreItemBehavior.h"
#include "../../Board.h"
#include "../../../LawnApp.h"
#include "../../../SexyAppFramework/Graphics.h"

void ComingSoonBeforeLevelStoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
	if (!theContext.mLawnApp.HasFinishedAdventure() 
		&& theContext.mLawnApp.mPlayerInfo->mLevel <= mAttributes.mLevel
	)
		theContext.mStoreItem.mAttributes.mComingSoon = true;
}