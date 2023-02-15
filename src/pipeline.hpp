#pragma once
#include <vector>
#include "kxrp.hpp"
namespace KXRP {

class pipeline final {
public: 
    pipeline(const char* VertPath, const char* FragPath);

protected:
    static std::vector<char> ReadFile(const char* path);

    void MakePipeline(const char* VertPath, const char* FragPath);
};




}