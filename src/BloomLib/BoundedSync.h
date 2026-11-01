#pragma once

#include "BloomSerializer.h"

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
	template <typename T> void Write(const T &theValue)
	{
		BloomSerializer<T>::Write(mBuffer, theValue);
	}
	template <typename T> T Read(const T &theDefaultValue)
	{
		if (BytesLeftToRead() <= 0)
			return theDefaultValue;
		else
			return BloomSerializer<T>::Read(mBuffer);
	}
	template <typename T> void Sync(T &theValue, const T &theDefaultValue = {})
	{
		if (mReading)
		{
			theValue = Read(theDefaultValue);
		}
		else
		{
			Write(theValue);
		}
	}
};