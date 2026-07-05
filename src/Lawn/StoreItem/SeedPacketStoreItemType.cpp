#include "SeedPacketStoreItemType.h"
#include "../SexyAppFramework/Graphics.h"
#include "../Resources.h"
#include "../LawnApp.h"
#include "../Widget/StoreScreen.h"
#include "../Sexy.TodLib/TodStringFile.h"
#include "../SeedPacket.h"
#include "StoreItemModifiers.h"

SeedPacketStoreItemType::SeedPacketStoreItemType(std::string theModName, std::string theTypeName,
													   const StoreItemAttributes &theAttributes)
	: StoreItemType(std::move(theModName), std::move(theTypeName), theAttributes)
{
	mModifiers.Add(StoreItemModifiers::SoldOutAfterOnePurchase);
	mOnPurchase.Add(StoreItemModifiers::OnPurchaseSetPurchasesTo<1>);
}

void SeedPacketStoreItemType::Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
									  bool theIsForHighlight) const
{
	DrawSeedPacket(g, thePosX, thePosY, mSeedType, SEED_NONE, 0, 255, false, false);
	StoreItemType::Draw(theStoreScreen, g, thePosX, thePosY, theIsForHighlight);
}

void SeedPacketStoreItemType::CopyFrom(const BloomType& theOther)
{
	StoreItemType::CopyFrom(theOther);

	TOD_ASSERT(
		dynamic_cast<const SeedPacketStoreItemType *>(&theOther),
		"theOther must be a SeedPacketStoreItemType"
	);

	auto &anOther = static_cast<const SeedPacketStoreItemType &>(theOther);

	mSeedType = anOther.mSeedType;
}