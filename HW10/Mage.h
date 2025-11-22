#pragma once
#include "Character.h"

class Mage : public Character 
{
private:
    std::string name;

public:
    Mage(const std::string& n);
    void attack() const override;
    std::string getInfo() const override;
};