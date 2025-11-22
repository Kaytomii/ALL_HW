#pragma once
#include <string>
#include <iostream>

class Character 
{
public:
    virtual void attack() const = 0;
    virtual std::string getInfo() const = 0;
    virtual ~Character() {};
};