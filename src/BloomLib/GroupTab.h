#pragma once

#include "Bloom.h"
#include "BloomType.h"
#include "EventList.h"
#include "SortContext.h"
#include "PatchHolder.h"

//#include "../Lawn/StoreItem/StoreItemType.h"

class LawnApp;

template <class T> class BLOOM_API GroupTab : public BloomType
{
  public:
	PatchHolder<GroupTab<T>> *mPatchHolder;
	EventList<SortContext<GroupTab<T>>> mSort;
	GroupTab(std::string theModName, std::string theTypeName)
		: BloomType(std::move(theModName), std::move(theTypeName))
	{
	}
	void CopyFrom(const GroupTab<T> &theOther)
	{
	}
	void Update(const LawnApp &theApp)
	{
	}
};