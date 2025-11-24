#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double x, double y, double w, double h) : x(x), y(y), w(w), h(h) {}

void Rectangle::print() const 
{
    std::cout << "Rectangle pos = " << x << "," << y << " size = " << w << "," << h << std::endl;
}