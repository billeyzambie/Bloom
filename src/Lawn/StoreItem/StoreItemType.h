#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"
#include "../BloomLib/EventList.h"
#include "../BloomLib/ListInsertion.h"

#include "../ConstEnums.h"
#include "../Resources.h"

namespace Sexy
{
class Image;
class Graphics;
}

class LawnApp;
class PlayerInfo;
class StoreScreen;

class StoreItem;
class StoreItemGroup;

class BLOOM_API StoreItemType : public BloomType
{
  public:
	struct Attributes
	{
		int mCost = 0;
		int mBuyCount = 1;
		int mMaxBuyCount = 1;
		int mUnlockLevel = 1;
		Sexy::ResourceId mIcon = Sexy::ResourceId::RESOURCE_ID_MAX;
		int mDrawOffsetX = 0;
		int mDrawOffsetY = 0;
		bool mUnavailable = false;
		bool mSoldOut = false;
		bool mComingSoon = false;
	};
	struct ModifierContext
	{
		const StoreItemType &mStoreItemType;
		const LawnApp &mLawnApp;
		const PlayerInfo &mPlayerInfo;
		const StoreItem &mStoreItemData;
		Attributes &mAttributes;
	};
	struct PurchaseContext
	{
		bool mCanceled;
		const StoreItemType &mStoreItemType;
		StoreScreen *mStoreScreen;
		LawnApp &mApp;
		StoreItem &mStoreItemData;
	};
	PatchHolder<StoreItemType> *mPatchHolder;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;
	EventList<ModifierContext> mModifiers;
	EventList<PurchaseContext> mOnPurchase;

	const StoreItemGroup *mGroup = nullptr;
	ListInsertion<StoreItemType> mInsertion;

  protected:
	mutable std::string mStoreMessage;

  public:
	StoreItemType(
		const std::string &theModName, const std::string &theTypeName,
		const Attributes &theAttributes
	);
	operator OldStoreItemType() const;
	virtual void CopyFrom(const StoreItemType &theOther);
	int GetCost() const;

	bool ExcludeFromSorting() const;

	virtual const std::string &GetStoreMessage(const LawnApp &theLawnApp) const;

	void Update(const LawnApp &theLawnApp);
	virtual void Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY, bool theIsForHighlight) const;
};

typedef StoreItemType::Attributes StoreItemAttributes;
typedef StoreItemType::ModifierContext StoreItemModifierContext;
typedef StoreItemType::PurchaseContext StoreItemPurchaseContext;