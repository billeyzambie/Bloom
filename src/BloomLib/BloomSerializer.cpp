#include "BloomSerializer.h"

void BloomSerializer<int>::Write(Sexy::Buffer &theBuffer, int theValue)
{
	theBuffer.WriteLong(theValue);
}

int BloomSerializer<int>::Read(Sexy::Buffer &theBuffer)
{
	return theBuffer.ReadLong();
}

void BloomSerializer<bool>::Write(Sexy::Buffer &theBuffer, bool theValue)
{
	theBuffer.WriteBoolean(theValue);
}

bool BloomSerializer<bool>::Read(Sexy::Buffer &theBuffer)
{
	return theBuffer.ReadBoolean();
}

void BloomSerializer<float>::Write(Sexy::Buffer &theBuffer, float theValue)
{
	static_assert(sizeof(float) == sizeof(int));
	theBuffer.WriteLong(reinterpret_cast<const int &>(theValue));
}

float BloomSerializer<float>::Read(Sexy::Buffer &theBuffer)
{
	int aFloatBits = theBuffer.ReadLong();
	return reinterpret_cast<float &>(aFloatBits);
}

void BloomSerializer<std::string>::Write(Sexy::Buffer &theBuffer, const std::string &theValue)
{
	theBuffer.WriteString(theValue);
}

std::string BloomSerializer<std::string>::Read(Sexy::Buffer &theBuffer)
{
	return theBuffer.ReadString();
}

void BloomSerializer<ResourceId>::Write(Sexy::Buffer &theBuffer, const ResourceId &theValue)
{
	theBuffer.WriteShort(theValue.NamespaceView().size());
	theBuffer.WriteString(theValue.AsString());
}

ResourceId BloomSerializer<ResourceId>::Read(Sexy::Buffer &theBuffer)
{
	short aNamespaceLength = theBuffer.ReadShort();
	std::string aNamespacedPath = theBuffer.ReadString();
	return {std::move(aNamespacedPath), (size_t)aNamespaceLength};
}