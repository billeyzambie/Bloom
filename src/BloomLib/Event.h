#pragma once

#include "PlantEatenContext.h"
#include <vector>
#include "BillFunctional.h"

template <class ContextT> class BLOOM_API Event
{
  public:
	using ContextFunctionPointer = Transformer<ContextT>;

  private:
	std::vector<ContextFunctionPointer> mFunctionPointers;
	Event() = default;

	ContextT &MExecute(ContextT &theContext) const
	{
		for (const auto &aFunctionPointer : mFunctionPointers)
		{
			if (aFunctionPointer)
				aFunctionPointer(theContext);
			if (theContext.mCanceled)
				break;
		}
		return theContext;
	}

	ContextT MExecute(ContextT &&theContext) const
	{
		for (const auto &aFunctionPointer : mFunctionPointers)
		{
			if (aFunctionPointer)
				aFunctionPointer(theContext);
			if (theContext.mCanceled)
				break;
		}
		return theContext;
	}

  public:
	static Event &GetInstance()
	{
		static Event anInstance;
		return anInstance;
	}

	static ContextT &Execute(ContextT &theContext)
	{
		return GetInstance().MExecute(theContext);
	}

	static ContextT Execute(ContextT &&theContext)
	{
		return GetInstance().MExecute(std::move(theContext));
	}

	ContextFunctionPointer operator+=(ContextFunctionPointer theFunctionPointer)
	{
		for (size_t i = 0; i < mFunctionPointers.size(); i++)
		{
			auto &aFunctionPointer = mFunctionPointers[i];
			if (!aFunctionPointer)
			{
				aFunctionPointer = theFunctionPointer;
				return theFunctionPointer;
			}
		}
		mFunctionPointers.push_back(theFunctionPointer);
		return theFunctionPointer;
	}

	ContextFunctionPointer operator-=(ContextFunctionPointer theFunctionPointer)
	{
		for (auto &aFunctionPointer : mFunctionPointers)
		{
			if (aFunctionPointer == theFunctionPointer)
				aFunctionPointer = nullptr;
		}
		return theFunctionPointer;
	}
};

#include "Events.h"