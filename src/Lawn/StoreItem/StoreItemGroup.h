#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/EventList.h"
#include "../BloomLib/PatchHolder.h"
#include "../BloomLib/ListInsertion.h"

class LawnApp;
class PlayerInfo;
class StoreScreen;

class BLOOM_API StoreItemGroup : public BloomType
{
  public:
	struct Attributes
	{
		bool mUnavailable = false;
		int mUnlockLevel = 1;
	};
	struct ModifierContext
	{
		const StoreItemGroup &mStoreItemGroupType;
		const LawnApp &mLawnApp;
		const PlayerInfo &mPlayerInfo;
		Attributes &mAttributes;
	};
	PatchHolder<StoreItemGroup> *mPatchHolder;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;
	EventList<ModifierContext> mModifiers;
	ListInsertion<StoreItemGroup> mInsertion;
	StoreItemGroup(std::string theModName, std::string theTypeName, const Attributes &theAttributes = {});
	virtual void CopyFrom(const StoreItemGroup &theOther);
	void Update(const LawnApp &theLawnApp);
	bool ExcludeFromSorting() const;
};

typedef StoreItemGroup::Attributes StoreItemGroupAttributes;
typedef StoreItemGroup::ModifierContext StoreItemGroupModifierContext;