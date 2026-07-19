#include "StoreItemType.h"
#include "../Sexy.TodLib/TodDebug.h"
#include "../LawnApp.h"
#include "../SexyAppFramework/Graphics.h"
#include "../Sexy.TodLib/TodCommon.h"
#include "StoreItem.h"
#include "../System/PlayerInfo.h"

StoreItemType::StoreItemType(
	std::string theModName, std::string theTypeName,
	const StoreItemAttributes &theAttributes
) 
	: BloomType(std::move(theModName), std::move(theTypeName)),
	mAttributeBaseValues(theAttributes), mAttributes(theAttributes)
{
	mModifiers.Add([](StoreItemModifierContext &theContext) {
		if (theContext.mStoreItemData.mPurchases >= theContext.mAttributes.mMaxBuyCount)
		{
			theContext.mAttributes.mSoldOut = true;
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
	mSort = theOther.mSort;
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

void StoreItemType::Update(const LawnApp &theLawnApp)
{
	mAttributes = mAttributeBaseValues;

	StoreItemModifierContext aContext{*this, theLawnApp, *theLawnApp.mPlayerInfo,
									  theLawnApp.mPlayerInfo->GetStoreItemData(*this), mAttributes};

	mModifiers.Fire(aContext);
}

void StoreItemType::Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY, bool theIsForHighlight) const
{
	Sexy::ResourceId aResourceId = mAttributes.mIcon;

	Sexy::Image *anIcon = Sexy::GetImageById(aResourceId);

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
