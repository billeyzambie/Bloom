#pragma once

#include "../BloomLib/BloomType.h"
#include "../BloomLib/PatchHolder.h"

class LawnApp;
class ProjectileBehavior;

template <class T>
concept ValidInstanceClass = sizeof(T) <= T::Type::INSTANCE_MAX_SIZE;

class BLOOM_API ProjectileBehaviorType : public BloomType
{
  public:
	static constexpr size_t INSTANCE_MAX_SIZE = 32;

	struct Attributes
	{
		int mUnused = 0;
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
		static_assert(
			(void *)(ProjectileBehavior *)(-1) == (void *)(T *)(ProjectileBehavior *)(-1),
			"Custom class must have the bloom base class first in its inherited list"
		);
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
	) : ProjectileBehaviorType(theModName, theTypeName, theAttributes);

	virtual ProjectileBehavior *Instantiate(void *theBuffer) const override
	{
		return InstantiateClass<T>();
	}
};