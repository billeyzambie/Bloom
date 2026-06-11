#include "Identifier.hpp"

Identifier::Identifier(std::string theModName, std::string theTypeName)
	: mModName(std::move(theModName)),
	  mTypeName(std::move(theTypeName))
{
}

std::size_t Identifier::ComputeHash() const
{
	std::size_t aHash = std::hash<std::string>{}(mModName);
	std::size_t anotherHash = std::hash<std::string>{}(mTypeName);
	return aHash ^ (anotherHash << 1);
}

std::string Identifier::AsString() const
{
	return mModName + ":" + mTypeName;
}