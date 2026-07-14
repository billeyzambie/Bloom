#pragma once

#include "Bloom.h"
#include "BloomType.h"
#include "EventList.h"
#include "SortContext.h"
#include "PatchHolder.h"
#include "GroupProperties.h"

//#include "../Lawn/StoreItem/StoreItemType.h"

class LawnApp;

template <class T> class BLOOM_API GroupTab : public BloomType
{
  public:
	PatchHolder<GroupTab<T>> *mPatchHolder;
	GroupProperties<GroupTab<T>> mGroupProperties;
	bool ShouldHideFromTabs() const
	{
		return false;
	}
	GroupTab(std::string theModName, std::string theTypeName)
		: BloomType(std::move(theModName), std::move(theTypeName))
	{
	}
	void CopyFrom(const GroupTab<T> &theOther)
	{
		mGroupProperties = theOther.mGroupProperties;
	}
	void Update(const LawnApp &theApp)
	{
	}
};