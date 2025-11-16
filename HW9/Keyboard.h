#pragma once
#include <string>

class Keyboard 
{
private:
    std::string layout;
    int keyCount;
    bool mechanical;

public:
    Keyboard(const std::string layout, int keyCount, bool mechanical);
    void show_Keyboard() const;
};
