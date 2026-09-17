#pragma once

#include "NamespacedString.h"

class BLOOM_API BloomType
{
	template <class T> friend class Registry;

  private:
	int mNumericalId = -1;

  public:
	const ResourceId mResourceId;
	BloomType(const std::string &theModName, const std::string &theTypeName);
	virtual ~BloomType() = default;
	BloomType(const BloomType &theCopied) = delete;
	int GetNumericalId() const;
	BloomType &operator=(const BloomType &theCopied) = delete;
	bool operator==(const BloomType &theOther) const;
};

template <class T> class PatchHolder;

template <class T>
concept InstanceClassHasValidSize = sizeof(T) <= T::Type::INSTANCE_MAX_SIZE;

template <class T>
concept ValidInstanceClass = InstanceClassHasValidSize<T> && std::is_nothrow_move_constructible_v<T>;

template <class T> using TypeOf = T::template TypeT<T>;