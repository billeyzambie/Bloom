#include "BloomType.h"
#include <iostream>

BloomType::BloomType(const std::string &theModName, const std::string &theTypeName)
	: mResourceId(theModName, theTypeName)
{
}

int BloomType::GetNumericalId() const
{
	return mNumericalId;
}

bool BloomType::operator==(const BloomType &theOther) const
{
	return mNumericalId == theOther.mNumericalId;
}