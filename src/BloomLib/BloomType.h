#pragma once

#include "Identifier.h"

class BLOOM_API BloomType
{
	template <class T> friend class Registry;

  private:
	int mNumericalId = -1;

  public:
	const Identifier mIdentifier;
	BloomType(std::string theModName, std::string theTypeName);
	virtual ~BloomType()
	{
	}
	BloomType(const BloomType &theCopied) = delete;
	int GetNumericalId() const;
	virtual void CopyFrom(const BloomType &theOther) = 0;
	BloomType &operator=(const BloomType &theCopied) = delete;
	bool operator==(const BloomType &theOther) const;
};