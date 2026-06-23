#pragma once

#ifdef BLOOM_EXPORT
#define BLOOM_API __declspec(dllexport)
#define BLOOM_GLOBAL inline __declspec(dllexport)
#else
#define BLOOM_API __declspec(dllimport)
#define BLOOM_GLOBAL extern __declspec(dllimport)
#endif

template<typename T>
using Transformer = void (*)(T &);