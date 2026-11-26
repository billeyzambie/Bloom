#pragma once

#include "../BloomLib/BloomType.h"

class LawnApp;
class StoreItemBehavior;

class BLOOM_API StoreItemBehaviorType : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 64;

	struct Attributes
	{
		int mUnused = 0;
	};
	PatchHolder<StoreItemBehaviorType> *mPatchHolder = nullptr;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;

	StoreItemBehaviorType(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes = {}
	);
	virtual void CopyFrom(const StoreItemBehaviorType &theOther);
	void Update(const LawnApp &theLawnApp);
	virtual StoreItemBehavior *Instantiate(void *theBuffer) const = 0;
	virtual StoreItemBehavior *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const = 0;
};

typedef StoreItemBehaviorType::Attributes StoreItemBehaviorAttributes;

template <ValidInstanceClass T> class StoreItemBehaviorTypeT : public StoreItemBehaviorType
{
  public:
	StoreItemBehaviorTypeT(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes = {}
	) : StoreItemBehaviorType(theModName, theTypeName, theAttributes)
	{
	}

	virtual StoreItemBehavior *Instantiate(void *theBuffer) const override
	{
		return new (theBuffer) T(*this);
	}

	virtual StoreItemBehavior *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const override
	{
		return new (theDestinationBuffer) T(std::move(*reinterpret_cast<T *>(theSourceBuffer)));
	}
};