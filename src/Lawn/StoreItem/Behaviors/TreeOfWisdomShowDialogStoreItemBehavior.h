#pragma once

#include "../StoreItemBehavior.h"

class BLOOM_API TreeOfWisdomShowDialogStoreItemBehavior : public StoreItemBehavior
{
  public:
	using StoreItemBehavior::StoreItemBehavior;
	virtual void OnPurchase(PurchaseContext &theContext) override;
};