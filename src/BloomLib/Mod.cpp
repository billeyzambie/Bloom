#include "Mod.h"

Mod::Mod(std::string theId, bool theHasResources, HMODULE theDll)
	: mId(std::move(theId)), mHasResources(theHasResources), mDll(theDll)
{
}
