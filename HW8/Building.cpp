#include "Building.h"

std::string Building::getAddress() const
{
    return address;
}

void Building::setAddress(std::string addr)
{
    this->address = addr;
}

void Building::addApertment(const Apartment& a)
{
    apartments.push_back(a);
}

void Building::showInfo_B() const
{
    std::cout << "Дом за адрессом: " << this->address << std::endl;
    for (const auto& a : apartments)
    {
        a.showInfo_A();
    }
}
