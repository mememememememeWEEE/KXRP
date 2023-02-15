#pragma once

#include "window.hpp"

#ifdef KXRP_DEBUG
#define LOG(...) printf(__VA_ARGS__)
#else
#define LOG(...)
#endif

namespace KXRP {};