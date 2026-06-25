#pragma once

#include <string>

#include "Bloom.h"

class BLOOM_API Identifier final
{
	friend std::hash<Identifier>;
private:
	std::size_t ComputeHash() const;
public:
	std::string mModName;
	std::string mTypeName;
	Identifier(std::string theModName, std::string theObjectName);
	Identifier(const Identifier& theOther) = default;
	Identifier &operator=(const Identifier& theOther) = default;
	Identifier(Identifier&& theOther) = default;
	std::string AsString() const;
	//bool operator==(const Identifier& theOther) const = default;
};

template<> struct BLOOM_API std::hash<Identifier>
{
	std::size_t operator()(const Identifier& theIdentifier) const noexcept
	{
		return theIdentifier.ComputeHash();
	}
};

