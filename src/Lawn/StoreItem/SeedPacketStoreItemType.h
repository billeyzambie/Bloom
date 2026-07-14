#pragma once

#include "StoreItemType.h"

class BLOOM_API SeedPacketStoreItemType : public StoreItemType
{
  public:
	SeedPacketStoreItemType(std::string theModName, std::string theTypeName,
							   const StoreItemAttributes &theAttributes);
	SeedType mSeedType = SeedType::SEED_NONE;
	virtual void CopyFrom(const BloomType &theOther) override;
	virtual void Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
					  bool theIsForHighlight) const override;
};