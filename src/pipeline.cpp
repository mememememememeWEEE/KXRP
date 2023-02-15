#include <vector>
#include <fstream>
#include <stdexcept>
#include "pipeline.hpp"
#include "kxrp.hpp"

using namespace KXRP;

pipeline::pipeline(const char* VertPath, const char* FragPath) {
	MakePipeline(VertPath, FragPath);
}


std::vector<char> pipeline::ReadFile(const char* path) {
    std::ifstream file{path, std::ios::ate | std::ios::binary};
    if (!file.is_open()) {
        throw std::runtime_error("FAILED TO READ FILE");
    }

    size_t fileSize = static_cast<size_t>(file.tellg());
    std::vector<char> buffer(fileSize);

    file.seekg(0);
    file.read(buffer.data(), fileSize);

    file.close();
    return buffer;
}

void pipeline::MakePipeline(const char* VertPath, const char* FragPath) {
	const auto vert = ReadFile(VertPath);
	const auto frag = ReadFile(FragPath);

	LOG("VERT SIZE: %d", vert.size());
	LOG("FRAG SIZE: %d", frag.size());
}
