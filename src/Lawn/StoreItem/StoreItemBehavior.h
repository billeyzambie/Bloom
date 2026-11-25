#pragma once

#include "../../BloomLib/Bloom.h"
#include "StoreItemBehaviorType.h"

class StoreItem;
class LawnApp;
class PlayerInfo;
class StoreScreen;

class BLOOM_API StoreItemBehavior
{
  public:
	typedef StoreItemBehaviorType Type;
	typedef Type RegistryType;
	template <ValidInstanceClass T> using TypeT = StoreItemBehaviorTypeT<T>;
	typedef StoreItem Owner;

	struct UpdateContext
	{
		const LawnApp &mLawnApp;
		const PlayerInfo &mPlayerInfo;
		StoreItem &mStoreItem;
	};
	struct PurchaseContext
	{
		bool mCanceled;
		StoreScreen *mStoreScreen;
		LawnApp &mApp;
		StoreItem &mStoreItem;
	};

	const StoreItemBehaviorType &mType;
	StoreItemBehaviorAttributes mAttributes;
	int mRunTime = 0;

	StoreItemBehavior(const StoreItemBehaviorType &theType);
	virtual ~StoreItemBehavior() = default;

	virtual void OnPurchase(PurchaseContext &theContext);

	void Update(UpdateContext &theContext);

  protected:
	virtual void VirtualUpdate(UpdateContext &theContext);
};