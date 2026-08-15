#pragma once

#include "../Lawn/System/SaveGame.h"
#include "Bloom.h"

class BLOOM_API BoundedSync
{
  private:
	Sexy::Buffer &mBuffer;
	int mBitReadStart = -1;
	int mBitReadEnd = -1;
	int mSizeBitPos = -1;
	bool mFinished = false;

  public:
	const bool mReading;
	BoundedSync(SaveGameContext &theContext);
	~BoundedSync();
	void Finish();
	int BytesLeftToRead();
	void SyncBytes(void *theDest, int theReadSize);
	template <typename T> void Write(const T &theValue) = delete;
	template <typename T> T Read() = delete;
	template <> void Write<int>(const int &theValue);
	template <> int Read<int>();
	template <> void Write<bool>(const bool &theValue);
	template <> bool Read<bool>();
	template <> void Write<float>(const float &theValue);
	template <> float Read<float>();
	template <typename T> T Read(const T &theDefaultValue)
	{
		if (BytesLeftToRead() <= 0)
			return theDefaultValue;
		else
			return Read<T>();
	}
	template <typename T> void Sync(T &theValue, const T &theDefaultValue)
	{
		if (mReading)
		{
			theValue = Read<T>(theDefaultValue);
		}
		else
		{
			Write(theValue);
		}
	}
};