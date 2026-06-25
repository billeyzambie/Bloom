#pragma once

#include "Identifier.h"

class BLOOM_API BloomType
{
	template <class T> friend class Registry;

  private:
	int mNumericalId;

  public:
	const Identifier mIdentifier;
	BloomType(Identifier theIdentifier);
	virtual ~BloomType()
	{
	}
	int GetNumericalId() const;
	virtual void CopyFrom(const BloomType & theOther) = 0;
	BloomType &operator=(const BloomType &youForgotTheAmpersandAfterTheAuto) = delete;
};