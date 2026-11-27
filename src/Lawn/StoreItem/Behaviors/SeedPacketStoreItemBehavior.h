#pragma once

#include "../StoreItemBehavior.h"
#include "../../../ConstEnums.h"

class SeedPacketStoreItemBehaviorType;

class BLOOM_API SeedPacketStoreItemBehavior : public StoreItemBehavior
{
  public:
	typedef SeedPacketStoreItemBehaviorType Type;
	template <ValidInstanceClass T> using TypeT = Type;
	using StoreItemBehavior::StoreItemBehavior;
	virtual void Draw(DrawContext &theContext) override;
};

class BLOOM_API SeedPacketStoreItemBehaviorType 
	: public StoreItemBehaviorTypeT<SeedPacketStoreItemBehavior>
{
  public:
	using StoreItemBehaviorTypeT<SeedPacketStoreItemBehavior>
		::StoreItemBehaviorTypeT<SeedPacketStoreItemBehavior>;
	OldSeedType mSeedType = OldSeedType::SEED_NONE;
};