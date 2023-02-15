#include <string>
#include "../lib/glfw/glfw3.h"
#include "kxrp.hpp"
#include "window.hpp"

using namespace KXRP;

window::window(const unsigned int& width, const unsigned int& height, const std::string& title) {
    this->InitWindow(width, height, title.c_str());
}

window::~window() {
    glfwDestroyWindow(this->theWindow);
    glfwTerminate();
}

void window::InitWindow(const unsigned int& width, const unsigned int& height, const char* title) {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    this->theWindow = glfwCreateWindow(width, height, title, nullptr, nullptr);
}