#pragma once

#include "StoreItemBehavior.h"

class BLOOM_API MainStoreItemBehavior : public StoreItemBehavior
{
  public:
	using StoreItemBehavior::StoreItemBehavior;
	virtual void VirtualUpdate(UpdateContext &theContext) override;
	virtual void Draw(DrawContext &theContext) override;
	virtual void OnPurchase(PurchaseContext &theContext) override;
};