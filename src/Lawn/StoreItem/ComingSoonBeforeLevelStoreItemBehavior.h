#pragma once

#include "StoreItemBehavior.h"

class BLOOM_API ComingSoonBeforeLevelStoreItemBehavior : public StoreItemBehavior
{
  public:
	using StoreItemBehavior::StoreItemBehavior;
	virtual void VirtualUpdate(UpdateContext &theContext) override;
};