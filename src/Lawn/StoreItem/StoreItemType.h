#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"
#include "../BloomLib/EventList.h"

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

struct BLOOM_API StoreItemAttributes
{
	int mCost = 0;
	int mBuyCount = 1;
	Sexy::ResourceId mIcon = Sexy::ResourceId::RESOURCE_ID_MAX;
	int mDrawOffsetX = 0;
	int mDrawOffsetY = 0;
};

class StoreItemType;

struct BLOOM_API StoreItemModifierContext
{
	const StoreItemType &mStoreItemType;
	const LawnApp &mLawnApp;
	const PlayerInfo &mPlayerInfo;
	StoreItemAttributes &mAttributes;
};

class BLOOM_API StoreItemType : public BloomType
{
  public:
	StoreItemAttributes mAttributeBaseValues;
	StoreItemAttributes mAttributes;
	EventList<StoreItemModifierContext> mModifiers;
	PatchHolder<StoreItemType> *mPatchHolder;
	StoreItemType(
		std::string theModName, std::string theTypeName,
		const StoreItemAttributes &theAttributes
	);
	operator OldStoreItemType() const;
	virtual void CopyFrom(const BloomType &theOther) override;
	int GetCost() const;
	void Update(const LawnApp &theLawnApp);
	virtual void Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY, bool theIsForHighlight) const;
};