#pragma once
#include <string>

class Camera 
{
private:
    std::string resolution;
    bool hasMicrophone;

public:
    Camera(const std::string resolution, bool hasMicrophone);
    void show_Camera() const;
};