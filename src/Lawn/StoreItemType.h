#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"
#include "../ConstEnums.h"

class BLOOM_API StoreItemType : public BloomType
{
  public:
	int mCost = 500;
	PatchHolder<StoreItemType> *mPatchHolder;
	StoreItemType(std::string theModName, std::string theTypeName);
	operator OldStoreItem() const;
	virtual void CopyFrom(const BloomType &theOther);
};