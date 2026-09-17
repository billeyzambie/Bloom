#pragma once

#include "../BloomLib/BloomType.h"

class LawnApp;
class ProjectileBehavior;

class BLOOM_API ProjectileBehaviorType : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 64;

	struct Attributes
	{
		short mAbilityWidth = 60;
		//In rows, not pixels, for splash damage. Might be in pixels for a few future behaviors.
		short mAbilityHeight = 3;
		short mAbilityMax = 7;
		float mAbilityIntensity = 0.33f;
	};
	PatchHolder<ProjectileBehaviorType> *mPatchHolder;
	Attributes mAttributeBaseValues;
	Attributes mAttributes;

	ProjectileBehaviorType(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes = {}
	);
	virtual void CopyFrom(const ProjectileBehaviorType &theOther);
	void Update(const LawnApp &theLawnApp);
	virtual ProjectileBehavior *Instantiate(void *theBuffer) const = 0;
	virtual ProjectileBehavior *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const = 0;
};

typedef ProjectileBehaviorType::Attributes ProjectileBehaviorAttributes;

template <ValidInstanceClass T> class ProjectileBehaviorTypeT : public ProjectileBehaviorType
{
  public:
	ProjectileBehaviorTypeT(
		const std::string &theModName,
		const std::string &theTypeName,
		const Attributes &theAttributes = {}
	) : ProjectileBehaviorType(theModName, theTypeName, theAttributes)
	{
	}

	virtual ProjectileBehavior *Instantiate(void *theBuffer) const override
	{
		return new (theBuffer) T(*this);
	}

	virtual ProjectileBehavior *MoveInstance(void *theDestinationBuffer, void *theSourceBuffer) const override
	{
		return new (theDestinationBuffer) T(std::move(*reinterpret_cast<T *>(theSourceBuffer)));
	}
};