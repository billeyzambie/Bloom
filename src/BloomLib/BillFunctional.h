#pragma once

template<typename T>
using Transformer = void (*)(T &);

template<typename T>
using Predicate = bool (*)(const T &);