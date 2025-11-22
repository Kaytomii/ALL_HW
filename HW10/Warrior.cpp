#include "Warrior.h"

Warrior::Warrior(const std::string& n) : name(n) {}

void Warrior::attack() const {
    std::cout << name << " наносит удар мечом" << std::endl;
}

std::string Warrior::getInfo() const {
    return "Воин: " + name;
}