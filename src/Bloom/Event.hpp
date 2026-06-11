#pragma once

#include "EventContext.hpp"
#include <vector>

template <class ContextT> class Event
{
	using ContextFunctionPointer = void (*)(ContextT &);

  private:
	std::vector<ContextFunctionPointer> mFuncPtrs;

  public:
	ContextFunctionPointer operator+=(ContextFunctionPointer theFuncPtr)
	{
		for (size_t i = 0; i < mFuncPtrs.size(); i++)
		{
			auto &aFuncPtr = mFuncPtrs[i];
			if (!aFuncPtr)
			{
				aFuncPtr = theFuncPtr;
				return theFuncPtr;
			}
		}
		mFuncPtrs.push_back(theFuncPtr);
		return theFuncPtr;
	}

	ContextFunctionPointer operator-=(ContextFunctionPointer theFuncPtr)
	{
		for (auto &aFuncPtr : mFuncPtrs)
		{
			if (aFuncPtr == theFuncPtr)
				aFuncPtr = nullptr;
		}
		return theFuncPtr;
	}

	void Execute(ContextT &theContext) const
	{
		for (const auto &aFuncPtr : mFuncPtrs)
		{
			if (aFuncPtr)
				aFuncPtr(theContext);
		}
	}
};