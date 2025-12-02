#include "AutoSalon.h"
#include <iostream>

void AutoSalon::addCar(const Car& car) 
{
    cars[car.getName()] = car;
}

void AutoSalon::removeCar(std::string name) 
{
    auto it = cars.find(name);
    if (it != cars.end()) 
    {
        cars.erase(it);
        std::cout << "Car \"" << name << "\" has been removed." << std::endl;
    }

    else 
    {
        std::cout << "Car \"" << name << "\" not found." << std::endl;
    }
}

void AutoSalon::showAll() const 
{
    if (cars.empty()) 
    {
        std::cout << "The showroom is empty." << std::endl;
        return;
    }
    for (auto pair : cars) 
    {
        pair.second.showInfo();
    }
}

void AutoSalon::findCar(std::string name) const 
{
    auto it = cars.find(name);

    if (it != cars.end()) 
    {
        it->second.showInfo();
    }

    else 
    {
        std::cout << "Car \"" << name << "\" not found." << std::endl;
    }
}