#include "BloomType.h"

BloomType::BloomType(Identifier theIdentifier) : mIdentifier(std::move(theIdentifier))
{
}

int BloomType::GetNumericalId() const
{
	return mNumericalId;
}
