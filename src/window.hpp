#pragma once
#include <string>
#include "../lib/glfw/glfw3.h"
namespace KXRP {


class window final {
public:
    window(const unsigned int& width, const unsigned int& height, const std::string& title);
    ~window();

    window(const window&) = delete;
    window& operator=(const window&) = delete;

    inline bool ShouldClose() const {return glfwWindowShouldClose(this->theWindow);}
    inline unsigned int GetWidth() const {return this->width;}
    inline unsigned int GetHeight() const {return this->height;}
    inline std::string GetTitle() const {return this->title;}

protected:
    void InitWindow(const unsigned int& width, const unsigned int& height, const char* title);

public: 
    GLFWwindow* theWindow;

protected:
    unsigned int width;
    unsigned int height;
    std::string title;
};

}