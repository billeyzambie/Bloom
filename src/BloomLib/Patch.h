#pragma once

#include "NamespacedString.h"
#include "BillFunctional.h"
#include <iostream>

template <class T> class BLOOM_API Patch
{
  public:
	struct Context
	{
		T &theT;
		T::Attributes &theAttributes;
	};
	ResourceId mId;
	Transformer<Context> mContextTransformer;
	void operator()(T &theT) const
	{
		Context aContext{theT, theT.mAttributeBaseValues};
		mContextTransformer(aContext);
	}

	Patch(ResourceId theId, Transformer<Context> theContextTransformer) 
		: mId(std::move(theId)), mContextTransformer(theContextTransformer)
	{
	}
};