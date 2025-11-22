#include "Mage.h"

Mage::Mage(const std::string& n) : name(n) {}

void Mage::attack() const {
    std::cout << name << " выпускает огненное заклинание" << std::endl;
}

std::string Mage::getInfo() const {
    return "Маг: " + name;
}