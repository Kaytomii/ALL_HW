#pragma once
#include "Shape.h"

class Circle : public IShape 
{
private:
    double r, x, y;

public:
    Circle(double r, double x, double y);
    void print() const override;
};