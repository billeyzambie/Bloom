#pragma once

#include "Bloom.h"

#include "Windows.h"

#include <string>

class BLOOM_API Mod
{
  public:
	std::string mId;
	int mLoadPosition = -1;
	bool mHasResources;
	HMODULE mDll;
	Mod(std::string theId, bool theHasResources, HMODULE theDll);
	Mod(Mod &&theMoved) noexcept = default;
	Mod &operator=(Mod &&theMoved) noexcept = default;
};