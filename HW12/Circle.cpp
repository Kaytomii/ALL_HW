#include "Circle.h"
#include <iostream>

Circle::Circle(double r, double x, double y) : r(r), x(x), y(y) {}

void Circle::print() const 
{
    std::cout << "Circle r = " << r << " center = " << x << "," << y << std::endl;
}