#pragma once
#include <iostream>
#include <string>

class Car
{
private:
    std::string name;
    double price;

public:
    Car();
    Car(std::string name, double price);

    std::string getName() const;
    void setName(std::string name);

    double getPrice() const;
    void setPrice(double price);

    void showInfo() const;
};

