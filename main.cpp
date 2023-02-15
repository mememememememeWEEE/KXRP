#include <cstdio>

#include "src/kxrp.hpp"
#include "src/window.hpp"

int main(void) {
    KXRP::window w(600, 400, "Test");
    while(!w.ShouldClose()) {
        glfwPollEvents();
    }
}
