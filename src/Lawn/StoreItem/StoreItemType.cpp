#include "StoreItemType.h"
#include "../Sexy.TodLib/TodDebug.h"
#include "../LawnApp.h"
#include "../SexyAppFramework/Graphics.h"
#include "../SexyAppFramework/Common.h"
#include "../Sexy.TodLib/TodCommon.h"
#include "StoreItem.h"
#include "../System/PlayerInfo.h"

static std::string CreateStoreMessage(const StoreItemType &theItemType)
{
	int aMessageIndex;
	switch (theItemType.GetNumericalId())
	{
	case STORE_ITEM_PLANT_GATLINGPEA:
		aMessageIndex = 2000;
		break;
	case STORE_ITEM_PLANT_TWINSUNFLOWER:
		aMessageIndex = 2001;
		break;
	case STORE_ITEM_PLANT_GLOOMSHROOM:
		aMessageIndex = 2002;
		break;
	case STORE_ITEM_PLANT_CATTAIL:
		aMessageIndex = 2003;
		break;
	case STORE_ITEM_PLANT_WINTERMELON:
		aMessageIndex = 2004;
		break;
	case STORE_ITEM_PLANT_GOLD_MAGNET:
		aMessageIndex = 2005;
		break;
	case STORE_ITEM_PLANT_SPIKEROCK:
		aMessageIndex = 2006;
		break;
	case STORE_ITEM_PLANT_COBCANNON:
		aMessageIndex = 2007;
		break;
	case STORE_ITEM_PLANT_IMITATER:
		aMessageIndex = 2008;
		break;
	case STORE_ITEM_BONUS_LAWN_MOWER:
		aMessageIndex = 2009;
		break;
	case STORE_ITEM_POTTED_MARIGOLD_1:
	case STORE_ITEM_POTTED_MARIGOLD_2:
	case STORE_ITEM_POTTED_MARIGOLD_3:
		aMessageIndex = 2010;
		break;
	case STORE_ITEM_GOLD_WATERINGCAN:
		aMessageIndex = 2019;
		break;
	case STORE_ITEM_FERTILIZER:
		aMessageIndex = 2020;
		break;
	case STORE_ITEM_BUG_SPRAY:
		aMessageIndex = 2022;
		break;
	case STORE_ITEM_PHONOGRAPH:
		aMessageIndex = 2021;
		break;
	case STORE_ITEM_GARDENING_GLOVE:
		aMessageIndex = 2023;
		break;
	case STORE_ITEM_MUSHROOM_GARDEN:
		aMessageIndex = 2032;
		break;
	case STORE_ITEM_WHEEL_BARROW:
		aMessageIndex = 2024;
		break;
	case STORE_ITEM_STINKY_THE_SNAIL:
		aMessageIndex = 2025;
		break;
	//case STORE_ITEM_PACKET_UPGRADE:
	//	if (mApp->mPlayerInfo->GetStoreItemData(StoreItemTypes::PACKET_UPGRADE).mPurchases < 4)
	//		aMessageIndex = mApp->mPlayerInfo->GetStoreItemData(StoreItemTypes::PACKET_UPGRADE).mPurchases + 2011;
	//	else
	//		aMessageIndex = 2014;
	//	break;
	case STORE_ITEM_POOL_CLEANER:
		aMessageIndex = 2026;
		break;
	case STORE_ITEM_ROOF_CLEANER:
		aMessageIndex = 2027;
		break;
	case STORE_ITEM_RAKE:
		aMessageIndex = 2028;
		break;
	case STORE_ITEM_AQUARIUM_GARDEN:
		aMessageIndex = 2029;
		break;
	case STORE_ITEM_CHOCOLATE:
		break;
	case STORE_ITEM_TREE_OF_WISDOM:
		aMessageIndex = 2030;
		break;
	case STORE_ITEM_TREE_FOOD:
		aMessageIndex = 2031;
		break;
	case STORE_ITEM_FIRSTAID:
		aMessageIndex = 2033;
		break;
	case STORE_ITEM_PVZ:
		aMessageIndex = 2034;
		break;
	default:
		return StrFormat("[CRAZY_DAVE_STORE_%s]", theItemType.mResourceId.CStr());
	}
	return StrFormat("[CRAZY_DAVE_%d]", aMessageIndex);
}

StoreItemType::StoreItemType(
	const std::string &theModName, const std::string &theTypeName,
	const StoreItemAttributes &theAttributes
) 
	: BloomType(theModName, theTypeName),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
	mModifiers.Add([](StoreItemModifierContext &theContext) {
		if (theContext.mStoreItemData.mPurchases >= theContext.mAttributes.mMaxBuyCount)
		{
			theContext.mAttributes.mSoldOut = true;
		}
		if (!theContext.mLawnApp.HasFinishedAdventure() 
			&& theContext.mPlayerInfo.GetLevel() <= theContext.mAttributes.mUnlockLevel)
		{
			theContext.mAttributes.mUnavailable = true;
		}
	});
}

StoreItemType::operator OldStoreItemType() const
{
	int aNumId = GetNumericalId();
	TOD_ASSERT(aNumId < OldStoreItemType::NUM_STORE_ITEM_MAX, "Unhandled modded StoreItemType");
	return (OldStoreItemType)aNumId;
}

void StoreItemType::CopyFrom(const StoreItemType &theOther)
{
	mAttributeBaseValues = theOther.mAttributeBaseValues;
	mModifiers = theOther.mModifiers;
	mOnPurchase = theOther.mOnPurchase;
	mInsertion = theOther.mInsertion;
	mGroup = theOther.mGroup;
}

int StoreItemType::GetCost() const
{
	return mAttributes.mCost;
}

bool StoreItemType::ExcludeFromSorting() const
{
	return mAttributes.mUnavailable;
}

const std::string &StoreItemType::GetStoreMessage(const LawnApp &theLawnApp) const
{
	if (mStoreMessage.empty())
		mStoreMessage = CreateStoreMessage(*this);
	return mStoreMessage;
}

void StoreItemType::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;

	StoreItemModifierContext aContext{*this, theLawnApp, *theLawnApp.mPlayerInfo,
									  theLawnApp.mPlayerInfo->GetStoreItemData(*this), mAttributes};

	mModifiers.Fire(aContext);
}

void StoreItemType::Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY, bool theIsForHighlight) const
{
	Sexy::Image *anIcon = GetIcon();

	if (anIcon)
		g->DrawImage(anIcon, thePosX + mAttributes.mDrawOffsetX, thePosY + mAttributes.mDrawOffsetY);
	
	int aCount = mAttributes.mBuyCount;

	if (aCount != 1)
	{
		std::string aCountLabel = "x";
		aCountLabel += std::to_string(aCount);
		TodDrawString(g, aCountLabel, thePosX + 56, thePosY + 62, Sexy::FONT_HOUSEOFTERROR16, Color::White, DS_ALIGN_RIGHT);
	}
}

Sexy::Image *StoreItemType::GetIcon() const
{
	if (mAttributes.mIconOverride)
		return mAttributes.mIconOverride;
	return mBaseIcon;
}