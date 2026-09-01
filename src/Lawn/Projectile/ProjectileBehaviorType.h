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
		int mLol = 0;
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
	ProjectileBehavior *InstantiateCustomClass(void *theBuffer) const
	{
		return new (theBuffer) T(*this);
	}
};

typedef ProjectileBehaviorType::Attributes ProjectileBehaviorAttributes;