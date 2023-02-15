#pragma once

#define vulkan "C:\VulkanSDK\1.3.236.0\Include\vulkan\vulkan.h"

#ifdef KXRP_DEBUG
#define LOG(...) printf(__VA_ARGS__)
#else
#define LOG(...)
#endif

namespace KXRP {};