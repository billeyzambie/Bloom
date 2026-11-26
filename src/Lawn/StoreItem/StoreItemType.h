#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/EventList.h"
#include "../BloomLib/ListInsertion.h"
#include "../BloomLib/ImageGetter.h"
#include "../BloomLib/BehaviorTypeList.h"

#include "../ConstEnums.h"

class LawnApp;

class StoreItem;
class StoreItemBehaviorType;
class StoreItemGroup;

class BLOOM_API StoreItemType final : public BloomType
{
  public:
	struct Attributes
	{
		Sexy::Image *mIconOverride = nullptr;
		int mCost = 0;
		int mBuyCount = 1;
		int mMaxBuyCount = 1;
		int mUnlockLevel = 1;
		int mDrawOffsetX = 0;
		int mDrawOffsetY = 0;
		bool mUnavailable = false;
		bool mSoldOut = false;
		bool mComingSoon = false;
	};
	PatchHolder<StoreItemType> *mPatchHolder = nullptr;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;

	ImageGetter mBaseIcon;

	const StoreItemGroup *mGroup = nullptr;
	ListInsertion<StoreItemType> mInsertion;

	BehaviorTypeList<StoreItemBehaviorType> mBehaviors;

  protected:
	mutable std::string mStoreMessage;

  public:
	StoreItemType(
		const std::string &theModName, const std::string &theTypeName,
		const Attributes &theAttributes
	);
	operator OldStoreItemType() const;
	void CopyFrom(const StoreItemType &theOther);
	int GetCost() const;

	bool ExcludeFromSorting() const;

	const std::string &GetStoreMessage(const LawnApp &theLawnApp) const;

	void Update(const LawnApp &theLawnApp);

	void MakeSeedPacketStoreItem(OldSeedType theSeedType);
};

typedef StoreItemType::Attributes StoreItemAttributes;