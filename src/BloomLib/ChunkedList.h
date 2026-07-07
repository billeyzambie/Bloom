#pragma once

#include <array>

template <class T, size_t N> class ChunkedList
{
  private:
	std::array<T, N> mContent;
	std::unique_ptr<ChunkedList> mNext = nullptr;

  public:
	T &operator[](size_t theIndex)
	{
		size_t aChunkIndex = theIndex % N;
		size_t aChunkCount = theIndex / N;
		ChunkedList *aPointer = this;
		for (size_t i = 0; i < aChunkCount; i++)
		{
			aPointer = aPointer->mNext.get();
		}
		return aPointer->mContent[aChunkIndex];
	}
	void EnsureIndex(size_t theIndex)
	{
		size_t aChunkCount = theIndex / N;
		ChunkedList *aPointer = this;
		for (size_t i = 0; i < aChunkCount; i++)
		{
			if (!aPointer->mNext)
			{
				aPointer->mNext = std::make_unique<ChunkedList>();
			}
			aPointer = aPointer->mNext.get();
		}
	}
};