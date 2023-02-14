#include <string>
#include "../lib/glfw/glfw3.h"
#include "kxrp.hpp"
#include "window.hpp"

using namespace KXRP;

window::window(const unsigned int& width, const unsigned int& height, const std::string& title) {
    this->InitWindow(width, height, title.c_str());
}

window::~window() {

}

void window::InitWindow(const unsigned int& width, const unsigned int& height, const char* title) {

}