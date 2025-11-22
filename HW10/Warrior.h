#pragma once
#include "Character.h"

class Warrior : public Character 
{
private:
    std::string name;

public:
    Warrior(const std::string& n);
    void attack() const override;
    std::string getInfo() const override;
};