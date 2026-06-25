#include "BloomType.h"
#include <iostream>

BloomType::BloomType(std::string theModName, std::string theTypeName) 
	: mIdentifier(std::move(theModName), std::move(theTypeName))
{
}

int BloomType::GetNumericalId() const
{
	return mNumericalId;
}
