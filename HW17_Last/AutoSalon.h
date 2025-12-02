#pragma once
#include <map>
#include <string>
#include <iostream>
#include "Car.h"

class AutoSalon
{
private:
    std::map<std::string, Car> cars;

public:
    void addCar(const Car& car);
    void removeCar(std::string name);
    void showAll() const;
    void findCar(std::string name) const;
};

