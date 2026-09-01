#pragma once

#include "../../BloomLib/Bloom.h"

class ProjectileBehaviorType;

class BLOOM_API ProjectileBehavior
{
  public:
	typedef ProjectileBehaviorType Type;
	const ProjectileBehaviorType &mType;
	ProjectileBehavior(const ProjectileBehaviorType &theType);
};