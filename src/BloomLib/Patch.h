#pragma once

#include "Identifier.h"
#include <iostream>

template <class T> class BLOOM_API Patch
{
  public:
	const Identifier mId;
	void (*mConsumer)(T &);
	void operator()(T &theT) const
	{
		std::cout << mId.mModName << ":" << mId.mTypeName << std::endl;
		mConsumer(theT);
	}

	Patch(Identifier theId, void (*theConsumer)(T &)) 
		: mId(std::move(theId)), mConsumer(theConsumer)
	{
	}
};