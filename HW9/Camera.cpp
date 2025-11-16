#include "Camera.h"
#include <iostream>

Camera::Camera(const std::string resolution, bool hasMicrophone) : resolution(resolution), hasMicrophone(hasMicrophone) {}

void Camera::show_Camera() const
{
	std::cout << "Camera: " << resolution << ", Microphone: " << (hasMicrophone ? "Yes" : "No") << "\n";
}
