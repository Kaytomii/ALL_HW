#include "Arena.h"
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include <iostream>

int main() 
{
    setlocale(LC_ALL, "");


    Arena arena;

    arena = arena + new Warrior("Test_1");
    arena = arena + new Mage("Test_2");
    arena = arena + new Archer("Test_3");

    std::cout << arena;

    std::cout << "Атака всех бойцов:" << std::endl;
    arena.attackAll();

    return 0;
}