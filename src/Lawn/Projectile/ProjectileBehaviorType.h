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
	virtual ProjectileBehavior *Instantiate(void *theBuffer) const;

  protected:
	template <ValidInstanceClass T>
	ProjectileBehavior *InstantiateClass(void *theBuffer) const
	{
		return new (theBuffer) T(*this);
	}
};

typedef ProjectileBehaviorType::Attributes ProjectileBehaviorAttributes;

template <class T> class CustomProjectileBehaviorType : public ProjectileBehaviorType
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
		return InstantiateClass<T>(theBuffer);
	}
};