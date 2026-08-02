#pragma once

#include <string>
#include <string_view>

#include "Bloom.h"
#include "../SexyAppFramework/Common.h"

//constexpr char theSeparator = '/';
//constexpr bool theUpperBarePathToo = true;

template <char theSeparator, bool theUpperBarePathToo> 
class BLOOM_API NamespacedString
{
  private:
	std::string mNamespacedPath;
	size_t mNamespaceLength;

  public:
	NamespacedString(std::string_view theNamespace, std::string_view theBarePath) 
		: mNamespaceLength(theNamespace.size())
	{
		std::string aNamespacedPath = std::string{theNamespace};
		if constexpr (!theUpperBarePathToo)
			Sexy::inlineUpper(aNamespacedPath);

		aNamespacedPath += theSeparator + std::string{theBarePath};

		mNamespacedPath = std::move(aNamespacedPath);
		if constexpr (theUpperBarePathToo)
			Sexy::inlineUpper(mNamespacedPath);
	}
	NamespacedString() 
		: mNamespacedPath(std::string{"?"} + theSeparator + '?'), mNamespaceLength(1)
	{
	}
	const std::string &AsString() const
	{
		return mNamespacedPath;
	}
	std::string CreateNamespaceString() const
	{
		return {mNamespacedPath.begin(), mNamespacedPath.begin() + mNamespaceLength};
	}
	std::string CreateBarePathString() const
	{
		return {mNamespacedPath.begin() + mNamespaceLength + 1, mNamespacedPath.end()};
	}
	std::string_view NamespaceView() const
	{
		return {mNamespacedPath.begin(), mNamespacedPath.begin() + mNamespaceLength};
	}
	const char *BarePathCStr() const
	{
		return mNamespacedPath.c_str() + mNamespaceLength + 1;
	}
	const char *CStr() const
	{
		return mNamespacedPath.c_str();
	}
};

typedef NamespacedString<'/', false> ResourcePath;
typedef NamespacedString<':', true> ResourceId;