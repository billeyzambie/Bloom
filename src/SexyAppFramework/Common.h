#ifndef __SEXYAPPFRAMEWORK_COMMON_H__
#define __SEXYAPPFRAMEWORK_COMMON_H__

#pragma warning(disable : 4786)
#pragma warning(disable : 4503)

#include "../BloomLib/Bloom.h"

//Libray Headers Start

#include <SDL3/SDL_timer.h>
#include <utf8.h>

//Libray Headers End

// Platform Headers Start

#ifdef _WIN32
#include <windows.h>
#include <shellapi.h>
#include <mmsystem.h>

#undef _WIN32_WINNT
#undef WIN32_LEAN_AND_MEAN

#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0500
#undef _UNICODE
#undef UNICODE

#ifdef LoadImage
#undef LoadImage // Windows, i fucking hate you -Electr0Gunner
#endif

#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif

#ifdef max
#undef max
#endif

#ifdef min
#undef min
#endif

// Platform Headers End

// STL Headers Start

#include <string>
#include <thread>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <cstdint>

// STL Headers End

// SexyString Start

#if defined(__clang__) && defined(_WIN32)
#define stricmp _stricmp
#define strnicmp _strnicmp
#endif

typedef std::string SexyString;
#define _S(x) static_assert(true, "_S has been removed");

#define sexystrncmp strncmp
#define sexystrcmp strcmp
#define sexystricmp stricmp
#define sexysscanf sscanf
#define sexyatoi atoi
#define sexystrcpy strcpy

#define LONG_BIGE_TO_NATIVE(l)                                                                                         \
	(((l >> 24) & 0xFF) | ((l >> 8) & 0xFF00) | ((l << 8) & 0xFF0000) | ((l << 24) & 0xFF000000))
#define WORD_BIGE_TO_NATIVE(w) (((w >> 8) & 0xFF) | ((w << 8) & 0xFF00))
#define LONG_LITTLEE_TO_NATIVE(l) (l)
#define WORD_LITTLEE_TO_NATIVE(w) (w)

#define LENGTH(anyarray) (sizeof(anyarray) / sizeof(anyarray[0]))

typedef std::map<std::string, std::string> DefinesMap;
typedef uint32_t SexyChar;
typedef SexyString::value_type SexyCharByte;
#define HAS_SEXYCHAR

inline SexyString operator+(SexyChar c, const SexyString &s)
{
	SexyString aStringOfChar = "";

	utf8::append(c, aStringOfChar);

	return aStringOfChar + s;
}

inline SexyString operator+(const SexyString &s, SexyChar c)
{
	SexyString aString = s;

	utf8::append(c, aString);

	return aString;
}


// SexyString End

namespace Sexy
{

const uint32_t SEXY_RAND_MAX = 0x7FFFFFFF;

extern BLOOM_API bool gDebug;

BLOOM_API int Rand();
BLOOM_API int Rand(int range);
BLOOM_API float Rand(float range);
BLOOM_API void SRand(uint32_t theSeed);
BLOOM_API extern std::string vformat(const char *fmt, va_list argPtr);
BLOOM_API extern std::string StrFormat(const char *fmt...);
BLOOM_API std::string GetAppDataFolder();
BLOOM_API void SetAppDataFolder(const std::string &thePath);
BLOOM_API std::string URLEncode(const std::string &theString);
BLOOM_API std::string StringToUpper(const std::string &theString);
BLOOM_API std::string StringToLower(const std::string &theString);
BLOOM_API SexyString StringToSexyString(const std::string &theString);
BLOOM_API std::string SexyStringToString(const SexyString &theString);
BLOOM_API std::string Upper(const std::string &theData);
BLOOM_API std::string Lower(const std::string &theData);
BLOOM_API std::string Trim(const std::string &theString);
BLOOM_API bool StringToInt(const std::string theString, int *theIntVal);
BLOOM_API bool StringToDouble(const std::string theString, double *theDoubleVal);
BLOOM_API int StrFindNoCase(const char *theStr, const char *theFind);
BLOOM_API bool StrPrefixNoCase(const char *theStr, const char *thePrefix, int maxLength = 10000000);
BLOOM_API SexyString CommaSeperate(int theValue);
BLOOM_API std::string Evaluate(const std::string &theString, const DefinesMap &theDefinesMap);
BLOOM_API std::string XMLDecodeString(const std::string &theString);
BLOOM_API std::string XMLEncodeString(const std::string &theString);

BLOOM_API bool Deltree(const std::string &thePath);
BLOOM_API bool FileExists(const std::string &theFileName);
BLOOM_API void MkDir(const std::string &theDir);
BLOOM_API std::string GetFileName(const std::string &thePath, bool noExtension = false);
BLOOM_API std::string GetFileDir(const std::string &thePath, bool withSlash = false);
BLOOM_API std::string RemoveTrailingSlash(const std::string &theDirectory);
BLOOM_API std::string AddTrailingSlash(const std::string &theDirectory, bool backSlash = false);
BLOOM_API uint64_t GetLastWriteFileDate(const std::string &theFileName);
BLOOM_API std::string GetCurDir();
BLOOM_API std::string GetFullPath(const std::string &theRelPath);
BLOOM_API std::string GetPathFrom(const std::string &theRelPath, const std::string &theDir);
BLOOM_API bool AllowAllAccess(const std::string &theFileName);

BLOOM_API SexyString SexyStringFromChar(SexyChar theChar);
BLOOM_API SexyString SexyCharToString(const SexyChar *theChars, int theLength);
BLOOM_API SexyString SexyCharToString(const SexyChar *theChars, int theStart, int theEnd);
BLOOM_API SexyString ANSIToUTF8(const SexyString &theString);
BLOOM_API size_t StringLength(const SexyChar *theString);

BLOOM_API uint64_t GetTicks();

// Read memory and then move the pointer
BLOOM_API void SMemR(void *&_Src, void *_Dst, size_t _Size);
BLOOM_API void SMemRStr(void *&_Src, std::string &theString);

// Write memory and then move the pointer
BLOOM_API void SMemW(void *&_Dst, const void *_Src, size_t _Size);
BLOOM_API void SMemWStr(void *&_Dst, const std::string &theString);

inline void inlineUpper(std::string &theData)
{
	//std::transform(theData.begin(), theData.end(), theData.begin(), toupper);

	int aStrLen = (int)theData.length();
	for (int i = 0; i < aStrLen; i++)
	{
		theData[i] = toupper(theData[i]);
	}
}

inline void inlineLower(std::string &theData)
{
	std::transform(theData.begin(), theData.end(), theData.begin(), tolower);
}


inline void inlineLTrim(std::string &theData, const std::string &theChars = " \t\r\n")
{
	theData.erase(0, theData.find_first_not_of(theChars));
}

inline void inlineRTrim(std::string &theData, const std::string &theChars = " \t\r\n")
{
	theData.resize(theData.find_last_not_of(theChars) + 1);
}

inline void inlineTrim(std::string &theData, const std::string &theChars = " \t\r\n")
{
	inlineRTrim(theData, theChars);
	inlineLTrim(theData, theChars);
}

struct BLOOM_API StringLessNoCase
{
	bool operator()(const std::string &s1, const std::string &s2) const
	{
		return stricmp(s1.c_str(), s2.c_str()) < 0;
	}
};

} // namespace Sexy

#endif //__SEXYAPPFRAMEWORK_COMMON_H__
