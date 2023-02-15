#include <cstdio>

#include "src/kxrp.hpp"
#include "src/window.hpp"
#include "src/pipeline.hpp"
#include vulkan

int main(void) {
    KXRP::window w(600, 400, "Test");
	KXRP::pipeline p{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
    while(!w.ShouldClose()) {
        glfwPollEvents();
    }
}
