#pragma once

#include "../Lawn/System/SaveGame.h"
#include "BloomType.h"
#include "Registry.h"

template <typename T> struct BloomSerializer;

template <> struct BLOOM_API BloomSerializer<int>
{
	static void Write(Sexy::Buffer &theBuffer, int theValue);
	static int Read(Sexy::Buffer &theBuffer);
};

template <> struct BLOOM_API BloomSerializer<float>
{
	static void Write(Sexy::Buffer &theBuffer, float theValue);
	static float Read(Sexy::Buffer &theBuffer);
};

template <> struct BLOOM_API BloomSerializer<bool>
{
	static void Write(Sexy::Buffer &theBuffer, bool theValue);
	static bool Read(Sexy::Buffer &theBuffer);
};

template <> struct BLOOM_API BloomSerializer<std::string>
{
	static void Write(Sexy::Buffer &theBuffer, const std::string &theValue);
	static std::string Read(Sexy::Buffer &theBuffer);
};

template <> struct BLOOM_API BloomSerializer<ResourceId>
{
	static void Write(Sexy::Buffer &theBuffer, const ResourceId &theValue);
	static ResourceId Read(Sexy::Buffer &theBuffer);
};

namespace Sexy
{

class Image;

}

template <> struct BLOOM_API BloomSerializer<Sexy::Image *>
{
	static void Write(Sexy::Buffer &theBuffer, Sexy::Image *theValue);
	static Sexy::Image *Read(Sexy::Buffer &theBuffer);
};

template <IsBloomType T> struct BloomSerializer<const T *>
{
	static void Write(Sexy::Buffer &theBuffer, const T *theValue)
	{
		if (!theValue)
			BloomSerializer<ResourceId>::Write(theBuffer, {});
		else
			BloomSerializer<ResourceId>::Write(theBuffer, theValue->mResourceId);
	}
	static const T *Read(Sexy::Buffer &theBuffer)
	{
		ResourceId aResourceId = BloomSerializer<ResourceId>::Read(theBuffer);
		if (aResourceId.IsEmpty())
			return nullptr;
		else
			return Registry<T>::gInstance->GetByResourceId(aResourceId);
	}
};