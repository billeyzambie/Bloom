#pragma once

#include "../BloomLib/BloomType.h"
#include "../ConstEnums.h"

class BLOOM_API StoreItemType : public BloomType
{
  public:
	int mCost = 500;
	StoreItemType(std::string theModName, std::string theTypeName);
	operator OldStoreItem();
	virtual void CopyFrom(const BloomType &theOther);
};