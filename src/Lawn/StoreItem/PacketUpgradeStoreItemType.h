#pragma once

#include "StoreItemType.h"

class BLOOM_API PacketUpgradeStoreItemType : public StoreItemType
{
  private:
	mutable std::vector<std::string> mStoreMessages;
  public:
	PacketUpgradeStoreItemType(
		std::string theModName, std::string theTypeName,
		const StoreItemAttributes &theAttributes
	);
	virtual const std::string &GetStoreMessage(const LawnApp &theLawnApp) const;
	virtual void Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
					  bool theIsForHighlight) const override;
};