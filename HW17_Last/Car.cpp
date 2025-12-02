#include "Car.h"
#include <iostream>

Car::Car() : name(""), price(0.0) 
{

}

Car::Car(std::string name, double price) : name(name), price(price) 
{

}

std::string Car::getName() const 
{ 
    return name; 
}

void Car::setName(std::string name) 
{
    this->name = name; 
}

double Car::getPrice() const 
{
    return price; 
}

void Car::setPrice(double price) 
{ 
    this->price = price; 
}

void Car::showInfo() const
{
    std::cout << name << " — " << price << "$" << std::endl;
}