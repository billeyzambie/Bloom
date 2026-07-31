#include "ResourcePath.h"

#include "../SexyAppFramework/Common.h"

ResourcePath::ResourcePath(std::string_view theNamespace, std::string_view theBarePath)
	: mNamespaceLength(theNamespace.size())
{
	std::string aNamespacedPath = std::string{theNamespace};
	Sexy::inlineUpper(aNamespacedPath);

	aNamespacedPath += '/' + std::string{theBarePath};

	mNamespacedPath = std::move(aNamespacedPath);
}

ResourcePath::ResourcePath() 
	: mNamespacedPath("?/?"), mNamespaceLength(1)
{
}

const std::string &ResourcePath::AsString() const
{
	return mNamespacedPath;
}

std::string ResourcePath::CreateNamespaceString() const
{
	return {mNamespacedPath.begin(), mNamespacedPath.begin() + mNamespaceLength};
}

std::string ResourcePath::CreateBarePathString() const
{
	return {mNamespacedPath.begin() + mNamespaceLength + 1, mNamespacedPath.end()};
}

std::string_view ResourcePath::NamespaceView() const
{
	return {mNamespacedPath.begin(), mNamespacedPath.begin() + mNamespaceLength};
}

const char *ResourcePath::BarePathCStr() const
{
	return mNamespacedPath.c_str() + mNamespaceLength + 1;
}

const char *ResourcePath::CStr() const
{
	return mNamespacedPath.c_str();
}
