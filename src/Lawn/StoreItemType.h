#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"
#include "../BloomLib/EventList.h"

#include "../ConstEnums.h"

namespace Sexy
{
class Image;
}

class PlayerInfo;

struct BLOOM_API StoreItemAttributes
{
	int mCost = 0;
	Sexy::Image *nIcon = nullptr;
	int mDrawOffsetX = 0;
	int mDrawOffsetY = 0;
};

class StoreItemType;

struct BLOOM_API StoreItemModifierContext
{
	const StoreItemType &mStoreItemType;
	const PlayerInfo &mPlayerInfo;
};

class BLOOM_API StoreItemType final : public BloomType
{
  public:
	StoreItemAttributes mAttributeBaseValues;
	StoreItemAttributes mAttributes;
	EventList<void (*)(const StoreItemModifierContext &, StoreItemAttributes &)> mModifiers;
	PatchHolder<StoreItemType> *mPatchHolder;
	StoreItemType(
		std::string theModName, std::string theTypeName,
		const StoreItemAttributes &theAttributes
	);
	operator OldStoreItemType() const;
	virtual void CopyFrom(const BloomType &theOther);
	int GetCost() const;
};