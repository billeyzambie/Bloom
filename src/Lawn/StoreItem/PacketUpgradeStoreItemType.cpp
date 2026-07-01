#include "PacketUpgradeStoreItemType.h"
#include "../SexyAppFramework/Graphics.h"
#include "../Resources.h"
#include "../LawnApp.h"
#include "../Widget/StoreScreen.h"
#include "../Sexy.TodLib/TodStringFile.h"

PacketUpgradeStoreItemType::PacketUpgradeStoreItemType(std::string theModName, std::string theTypeName,
										  const StoreItemAttributes &theAttributes)
	: StoreItemType(std::move(theModName), std::move(theTypeName), theAttributes)
{
}

void PacketUpgradeStoreItemType::Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
								   bool theIsForHighlight) const
{
	g->SetColor(Sexy::Color(255, 255, 255, 32));
	StoreItemType::Draw(theStoreScreen, g, thePosX, thePosY, theIsForHighlight);
	if (theIsForHighlight)
	{
		g->SetDrawMode(Sexy::Graphics::DRAWMODE_NORMAL);
		g->SetColorizeImages(false);
	}
	int aNumSlots = theStoreScreen->mApp->mPlayerInfo->mPurchases[STORE_ITEM_PACKET_UPGRADE] + 7;
	aNumSlots = std::clamp(aNumSlots, 7, 10);
	SexyString aSlotText = TodReplaceNumberString("[STORE_UPGRADE_SLOTS]", "{SLOTS}", aNumSlots);
	Sexy::Rect aRect(thePosX, thePosY + 6, 55, 70);
	TodDrawStringWrapped(g, aSlotText, aRect, Sexy::FONT_HOUSEOFTERROR16, Sexy::Color::White,
						 DS_ALIGN_CENTER_VERTICAL_MIDDLE);
}
