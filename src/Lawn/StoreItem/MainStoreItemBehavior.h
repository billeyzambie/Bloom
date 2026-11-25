#pragma once

#include "StoreItemBehavior.h"

class BLOOM_API MainStoreItemBehavior : public StoreItemBehavior
{
  public:
	MainStoreItemBehavior(const StoreItemBehaviorType &theType);
	virtual void VirtualUpdate(UpdateContext &theContext) override;
	virtual void OnPurchase(PurchaseContext &theContext) override;
};