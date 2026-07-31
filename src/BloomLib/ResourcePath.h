#pragma once

#include <string>
#include <string_view>

#include "Bloom.h"

class BLOOM_API ResourcePath
{
  private:
	std::string mNamespacedPath;
	size_t mNamespaceLength;

  public:
	ResourcePath(std::string_view theNamespace, std::string_view theBarePath);
	ResourcePath();
	const std::string &AsString() const;
	std::string CreateNamespaceString() const;
	std::string CreateBarePathString() const;
	std::string_view NamespaceView() const;
	const char *BarePathCStr() const;
	const char *CStr() const;
};