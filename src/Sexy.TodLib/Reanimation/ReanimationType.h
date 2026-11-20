#pragma once

#include "../../BloomLib/BloomType.h"
#include "../ConstEnums.h"

class Reanimation;
class LawnApp;

class BLOOM_API ReanimationType final : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = -1;
	struct Attributes
	{
	};
	PatchHolder<ReanimationType> *mPatchHolder = nullptr;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;
	ResourcePath mFile;
	bool mNoAtlas = false;
	bool mPlantHasSeparateHead = false;
	ReanimationType(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes
	);
	operator OldReanimationType() const;
	virtual void CopyFrom(const ReanimationType &theOther);
	void Update(const LawnApp &theLawnApp);
	Reanimation *Instantiate(void *theBuffer) const;
	Reanimation *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const;
};

typedef ReanimationType::Attributes ReanimationAttributes;