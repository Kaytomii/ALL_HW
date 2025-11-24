#pragma once
#include <iostream>

class IShape
{
public:
    virtual ~IShape() {}
    virtual void print() const = 0;
};