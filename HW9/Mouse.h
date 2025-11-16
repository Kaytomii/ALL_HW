#pragma once
#include <string>

class Mouse 
{
private:
    std::string brand;
    int dpi;
    bool wireless;

public:
    Mouse(const std::string brand, int dpi, bool wireless);
    void show() const;
};


