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

	NamespacedString(std::string theNamespacedPath, size_t theNamespaceLength) 
		: mNamespacedPath(std::move(theNamespacedPath)), mNamespaceLength(theNamespaceLength)
	{
	}

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
		: mNamespacedPath(std::string{theSeparator}), mNamespaceLength(0)
	{
	}
	static NamespacedString FromCString(const char *theCString)
	{
		std::string aNamespacedPath = theCString;
		size_t aNamespaceLength = aNamespacedPath.find(theSeparator);
		if (aNamespaceLength == std::string::npos)
			aNamespaceLength = 0;
		return {std::move(aNamespacedPath), aNamespaceLength};
	}
	static NamespacedString FromStringWithDefaultNamespace(std::string_view theString, std::string_view theDefaultNamespace)
	{
		size_t aNamespaceLength = theString.find(':');
		if (aNamespaceLength == std::string::npos)
			return {theDefaultNamespace, theString};
		std::string aString{theString};
		if constexpr (theSeparator != ':')
			aString[aNamespaceLength] = theSeparator;
		return {std::move(aString), aNamespaceLength};
	}
	NamespacedString(const NamespacedString &theCopied) = default;
	NamespacedString(NamespacedString &&theMoved) = default;
	NamespacedString &operator=(const NamespacedString &theCopied) = default;
	NamespacedString &operator=(NamespacedString &&theMoved) = default;
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
	bool IsEmpty() const
	{
		return mNamespacedPath.size() <= mNamespaceLength + 1;
	}
	NamespacedString operator+(const std::string &theString) const
	{
		return {NamespaceView(), BarePathCStr() + theString};
	}
	bool operator==(const NamespacedString &theOther) const = default;
	bool operator<(const NamespacedString &theOther) const
	{
		return mNamespacedPath < theOther.mNamespacedPath;
	}
};

template <char theSeparator, bool theUpperBarePathToo> 
NamespacedString<theSeparator, theUpperBarePathToo> operator+(
	std::string_view theStringView,
	NamespacedString<theSeparator, theUpperBarePathToo> theNamespacedString
)
{
	return {theNamespacedString.NamespaceView(), std::string{theStringView} + theNamespacedString.BarePathCStr()};
}

typedef NamespacedString<'/', false> ResourcePath;
typedef NamespacedString<':', true> ResourceId;

template <> struct std::hash<ResourceId>
{
	std::size_t operator()(const ResourceId &theResourceId) const noexcept
	{
		return std::hash<std::string>{}(theResourceId.AsString());
	}
};

template <> struct std::hash<ResourcePath>
{
	std::size_t operator()(const ResourcePath &theResourcePath) const noexcept
	{
		return std::hash<std::string>{}(theResourcePath.AsString());
	}
};