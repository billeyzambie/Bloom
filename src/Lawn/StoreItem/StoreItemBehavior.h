#pragma once

#include "../../BloomLib/Bloom.h"
#include "StoreItemBehaviorType.h"

namespace Sexy
{
	class Graphics;
}

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
		StoreItem &mStoreItem;
		const LawnApp &mLawnApp;
		const PlayerInfo &mPlayerInfo;
	};
	struct DrawContext
	{
		StoreItem &mStoreItem;
		StoreScreen *mStoreScreen;
		Sexy::Graphics &mGraphics;
		int mPosX; 
		int mPosY;
		bool mIsForHighlight;
	};
	struct PurchaseContext
	{
		bool mCanceled;
		StoreItem &mStoreItem;
		StoreScreen *mStoreScreen;
		LawnApp &mApp;
	};

	const StoreItemBehaviorType &mType;
	StoreItemBehaviorAttributes mAttributes;
	int mRunTime = 0;

	StoreItemBehavior(const StoreItemBehaviorType &theType);
	virtual ~StoreItemBehavior() = default;
	
	virtual void OnPurchase(PurchaseContext &theContext);
	virtual void Draw(DrawContext &theContext);
	void Update(UpdateContext &theContext);

  protected:
	virtual void VirtualUpdate(UpdateContext &theContext);
};