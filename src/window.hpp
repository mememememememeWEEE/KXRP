#pragma once
#include <string>

class window final {
public:
    window(const unsigned int& width, const unsigned int& height, const std::string& title);
    ~window();

protected:
    void InitWindow(const unsigned int& width, const unsigned int& height, const char* title);

    inline unsigned int GetWidth() const {return this->width;}
    inline unsigned int GetHeight() const {return this->height;}
    inline std::string GetTitle() const {return this->title;}

protected:
    unsigned int width;
    unsigned int height;
    std::string title;
};