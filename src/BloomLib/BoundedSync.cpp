#include "BoundedSync.h"

BoundedSync::BoundedSync(SaveGameContext &theContext) 
	: mBuffer(theContext.mBuffer), mReading(theContext.mReading)
{
	if (mReading)
	{
		int aSize = mBuffer.ReadLong();
		mBitReadStart = mBuffer.mReadBitPos;
		mBitReadEnd = mBitReadStart + 8 * aSize;
	}
	else
	{
		mSizeBitPos = mBuffer.mWriteBitPos;
		mBuffer.WriteLong(-1);
	}
}

BoundedSync::~BoundedSync()
{
	TOD_ASSERT(mFinished, "Forgot to call Finish when the BoundedSync finished");
}

void BoundedSync::Finish()
{
	TOD_ASSERT(!mFinished, "Finish called twice");
	if (mReading)
	{
		mBuffer.mReadBitPos = mBitReadEnd;
	}
	else
	{
		TOD_ASSERT(mSizeBitPos % 8 == 0);
		TOD_ASSERT(mBuffer.mWriteBitPos % 8 == 0);

		int aSizeIndex = mSizeBitPos / 8;
		int aSize = (mBuffer.mWriteBitPos - mSizeBitPos) / 8 - 4;

		mBuffer.mData[aSizeIndex] = aSize;
		mBuffer.mData[aSizeIndex + 1] = aSize >> 8;
		mBuffer.mData[aSizeIndex + 2] = aSize >> 16;
		mBuffer.mData[aSizeIndex + 3] = aSize >> 24;
	}
	mFinished = true;
}

int BoundedSync::BytesLeftToRead()
{
	return (mBitReadEnd - mBuffer.mReadBitPos) / 8;
}

void BoundedSync::SyncBytes(void *theDest, int theReadSize)
{
	int aReadSize = theReadSize;
	if (mReading)
	{
		aReadSize = BytesLeftToRead() < 4 ? 0 : mBuffer.ReadLong();
	}
	else
	{
		mBuffer.WriteLong(theReadSize);
	}

	if (mReading)
	{
		if (aReadSize != theReadSize || BytesLeftToRead() < theReadSize)
		{
			memset(theDest, 0, theReadSize);

			if (aReadSize > theReadSize)
				return;
		}
			
		mBuffer.ReadBytes((uint8_t *)theDest, std::min(aReadSize, BytesLeftToRead()));
	}
	else
	{
		mBuffer.WriteBytes((uint8_t *)theDest, theReadSize);
	}
}