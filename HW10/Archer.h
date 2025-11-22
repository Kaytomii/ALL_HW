#pragma once
#include "Character.h"

class Archer : public Character 
{
private:
    std::string name;

public:
    Archer(const std::string& n);
    void attack() const override;
    std::string getInfo() const override;
};