#pragma once

#include "StoreItemType.h"

struct Lol
{
	int mField;
};

class BLOOM_API PacketUpgradeStoreItemType : public Lol, public StoreItemType
{
  public:
	PacketUpgradeStoreItemType(
		std::string theModName, std::string theTypeName,
		const StoreItemAttributes &theAttributes
	);
	virtual void Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
					  bool theIsForHighlight) const override;
};