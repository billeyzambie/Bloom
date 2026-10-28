#pragma once

#include "../../BloomLib/BloomType.h"

#include "../ConstEnums.h"

class Plant;
class LawnApp;

class BLOOM_API PlantType final : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 352;
	struct Attributes
	{
		int mWidth = 80;
		int mHeight = 80;
		int mMaxHealth = 300;
	};
	PatchHolder<PlantType> *mPatchHolder = nullptr;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;
	int mCost = 100;
	int mRechargeTime = 750;
	ReanimationType mBaseReanim = ReanimationType::REANIM_NONE;
	PlantType(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes
	);
	operator SeedType() const;
	virtual void CopyFrom(const PlantType &theOther);
	void Update(const LawnApp &theLawnApp);
	Plant *Instantiate(void *theBuffer) const;
	Plant *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const;
};

typedef PlantType::Attributes PlantAttributes;