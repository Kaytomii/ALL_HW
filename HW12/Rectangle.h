#pragma once
#include "Shape.h"

class Rectangle : public IShape 
{
private:
    double x, y, w, h;

public:
    Rectangle(double x, double y, double w, double h);
    void print() const override;
};