#include "SeedPacketStoreItemBehavior.h"
#include "../../Seed/SeedPacket.h"
#include "../../../SexyAppFramework/Graphics.h"
#include "../../../Resources.h"

void SeedPacketStoreItemBehavior::Draw(DrawContext &theContext)
{
	const Type &aType = static_cast<const Type &>(mType);

	if (!theContext.mIsForHighlight)
		DrawSeedPacket(&theContext.mGraphics, theContext.mPosX, theContext.mPosY, aType.mSeedType, SEED_NONE, 0, 255, false, false);
	else 
		theContext.mGraphics.DrawImage(Sexy::IMAGE_SEEDPACKETFLASH, theContext.mPosX, theContext.mPosY);
}