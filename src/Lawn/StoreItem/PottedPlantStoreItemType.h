#pragma once

#include "StoreItemType.h"

BLOOM_API void PottedPlantSoldOut(StoreItemModifierContext &theContext);

class BLOOM_API PottedPlantStoreItemType : public StoreItemType
{
  public:
	PottedPlantStoreItemType(
		std::string theModName, std::string theTypeName,
		const StoreItemAttributes &theAttributes
	);
	virtual void Draw(StoreScreen *theStoreScreen, Sexy::Graphics *g, int thePosX, int thePosY,
					  bool theIsForHighlight) const override;
};