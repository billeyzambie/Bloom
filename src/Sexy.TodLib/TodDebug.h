#ifndef __TODDEBUG_H__
#define __TODDEBUG_H__

#ifdef _WIN32
#include <Windows.h>
#endif

#include "../BloomLib/Bloom.h"

class BLOOM_API TodHesitationBracket
{
  public:
	char mMessage[256];
	int mBracketStartTime;

  public:
	TodHesitationBracket(const char *theFormat, ...)
	{
		;
	}
	~TodHesitationBracket()
	{
		;
	}

	inline void EndBracket()
	{
		;
	}
};

BLOOM_API void TodLog(const char *theFormat, ...);
BLOOM_API void TodLogString(const char *theMsg);
BLOOM_API void TodTrace(const char *theFormat, ...);
BLOOM_API void TodTraceMemory();
BLOOM_API void TodTraceAndLog(const char *theFormat, ...);
BLOOM_API void TodTraceWithoutSpamming(const char *theFormat, ...);
BLOOM_API void TodHesitationTrace(...);
#if defined(_WIN32) && defined(SEXY_CRASH_HANDLER)
BLOOM_API void TodReportError(LPEXCEPTION_POINTERS exceptioninfo, const char *theMessage);
BLOOM_API long __stdcall TodUnhandledExceptionFilter(LPEXCEPTION_POINTERS exceptioninfo);
#endif
BLOOM_API void TodAssertFailed(const char *theCondition, const char *theFile, int theLine, const char *theMsg = "", ...);
BLOOM_API void TodErrorMessageBox(const char *theMessage, const char *theTitle);

BLOOM_API void *TodMalloc(int theSize);
BLOOM_API void TodFree(void *theBlock);
BLOOM_API void TodAssertInitForApp();

extern BLOOM_API void (*gBetaSubmitFunc)();

#ifndef WIN32
#define SexyDebuggerCheck() false //The best i can do till i see linux support
#else
#define SexyDebuggerCheck() IsDebuggerPresent()
#endif

#ifdef _DEBUG
#define TOD_ASSERT(condition, ...)                                                                                     \
	{                                                                                                                  \
		if (!bool(condition))                                                                                          \
		{                                                                                                              \
			TodAssertFailed("" #condition, __FILE__, __LINE__, ##__VA_ARGS__);                                         \
			if (SexyDebuggerCheck())                                                                                   \
			{                                                                                                          \
				__debugbreak();                                                                                        \
			}                                                                                                          \
			TodTraceMemory();                                                                                          \
		}                                                                                                              \
	}
#else
#define TOD_ASSERT(condition, ...)
#endif

#endif
