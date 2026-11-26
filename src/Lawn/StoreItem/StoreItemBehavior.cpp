#include "StoreItemBehavior.h"

StoreItemBehavior::StoreItemBehavior(const StoreItemBehaviorType &theType) 
	: mType(theType), mAttributes(mType.mAttributes)
{
}

void StoreItemBehavior::Update(UpdateContext &theContext)
{
	mAttributes = mType.mAttributes;
	VirtualUpdate(theContext);
	mRunTime++;
}

void StoreItemBehavior::VirtualUpdate(UpdateContext &theContext)
{
}

void StoreItemBehavior::OnPurchase(PurchaseContext &theStoreItem)
{
}

void StoreItemBehavior::Draw(DrawContext &theStoreItem)
{
}