#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"

class LawnApp;
class ProjectileBehavior;

template <class T>
concept InstanceClassHasValidSize = sizeof(T) <= T::Type::INSTANCE_MAX_SIZE;

template <class T>
concept ValidInstanceClass = InstanceClassHasValidSize<T> && std::is_move_constructible_v<T>;

class BLOOM_API ProjectileBehaviorType : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 32;

	struct Attributes
	{
		float mUpdateRateMultiplier = 1;
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

template <ValidInstanceClass T> class CustomProjectileBehaviorType : public ProjectileBehaviorType
{
  public:
	CustomProjectileBehaviorType(
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