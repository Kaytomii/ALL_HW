#include "Arena.h"
#include <iostream>

Arena::~Arena() 
{
    for (auto f : fighters) 
    {
        delete f;
    }
}

void Arena::add(Character* fighter) 
{
    fighters.push_back(fighter);
}

void Arena::remove(int index) 
{
    if (index >= 0 && index < (int)fighters.size()) 
    {
        delete fighters[index];
        fighters.erase(fighters.begin() + index);
    }
}

void Arena::show() const 
{
    for (size_t i = 0; i < fighters.size(); ++i) 
    {
        std::cout << i << ": " << fighters[i]->getInfo() << std::endl;
    }
}

void Arena::attackAll() const
{
    for (auto f : fighters) 
    {
        f->attack();
    }
}

Arena& Arena::operator+(Character* fighter) 
{
    add(fighter);
    return *this;
}

void Arena::print(std::ostream& os) const 
{
    for (size_t i = 0; i < fighters.size(); ++i) 
    {
        os << i << ": " << fighters[i]->getInfo() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Arena& arena) 
{
    arena.print(os);
    return os;
}