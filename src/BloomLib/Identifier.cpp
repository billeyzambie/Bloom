#include "Identifier.h"

#include "../SexyAppFramework/Common.h"

Identifier::Identifier(const std::string &theModName, const std::string &theTypeName)
	: mModName(Sexy::StringToUpper(theModName)),
	  mTypeName(Sexy::StringToUpper(theTypeName))
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