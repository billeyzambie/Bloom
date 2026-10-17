#include "../../BloomLib/BloomType.h"

#include "../ConstEnums.h"

class Plant;

class PlantType final : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 232;
	struct Attributes
	{
		int mCost = 100;
		int mRechargeTime = 750;
		int mMaxHealth = 300;
		int mWidth = 80;
		int mHeight = 80;
	};
	PatchHolder<PlantType> *mPatchHolder = nullptr;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;
	PlantType(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes
	);
	operator SeedType() const;
	virtual void CopyFrom(const PlantType &theOther);
	void Update();
	Plant *Instantiate(void *theBuffer) const;
	Plant *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const;
};