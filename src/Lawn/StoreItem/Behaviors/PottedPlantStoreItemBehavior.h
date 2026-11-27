#pragma once

#include "../StoreItemBehavior.h"
#include "../../System/PlayerInfo.h"
#include <memory>

class StoreItemBehaviorType;
class PottedPlant;
class PlantType;
class PottedPlantStoreItemBehaviorType;

class BLOOM_API PottedPlantStoreItemBehavior : public StoreItemBehavior
{
  public:
	typedef PottedPlantStoreItemBehaviorType Type;
	template <ValidInstanceClass T> using TypeT = Type;

	PottedPlantStoreItemBehavior(const StoreItemBehaviorType &theType);

	std::unique_ptr<PottedPlant> mPottedPlant = nullptr;
	int mLastDayBought = 0;

	virtual void VirtualUpdate(UpdateContext &theContext) override;
	virtual void Draw(DrawContext &theContext) override;
	virtual void OnPurchase(PurchaseContext &theContext) override;

	//You can subclass this behavior and override this method to do things like a random plant each time
	virtual void InitializePottedPlant();
};

class BLOOM_API PottedPlantStoreItemBehaviorType 
	: public StoreItemBehaviorTypeT<PottedPlantStoreItemBehavior>
{
  public:
	using StoreItemBehaviorTypeT<PottedPlantStoreItemBehavior>::StoreItemBehaviorTypeT;
	const PlantType *mPlantType = nullptr;
	virtual void CopyFrom(const StoreItemBehaviorType &theOther);
};