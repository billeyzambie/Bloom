#pragma once

#include "../StoreItemBehavior.h"

class ComingSoonBeforeOthersStoreItemBehaviorType;
class StoreItemType;

class BLOOM_API ComingSoonBeforeOthersStoreItemBehavior : public StoreItemBehavior
{
  public:
	typedef ComingSoonBeforeOthersStoreItemBehaviorType Type;
	template <ValidInstanceClass T> using TypeT = Type;
	using StoreItemBehavior::StoreItemBehavior;
	virtual void VirtualUpdate(UpdateContext &theContext) override;
};

class BLOOM_API ComingSoonBeforeOthersStoreItemBehaviorType 
	: public StoreItemBehaviorTypeT<ComingSoonBeforeOthersStoreItemBehavior>
{
  public:
	using StoreItemBehaviorTypeT<ComingSoonBeforeOthersStoreItemBehavior>::StoreItemBehaviorTypeT;
	//Any of, not all of
	std::vector<const StoreItemType *> mOthers;
};