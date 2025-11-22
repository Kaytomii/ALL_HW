#include "Archer.h"

Archer::Archer(const std::string& n) : name(n) {}

void Archer::attack() const {
    std::cout << name << " выпускает стрелу из лука" << std::endl;
}

std::string Archer::getInfo() const {
    return "Лучник: " + name;
}