#include "Employer.h"

Employer::Employer(std::string n, unsigned short a, double s) : name{ n }, age{ a }, salary{ s } {}

std::string Employer::getName() const
{
    return name;
}

unsigned short Employer::getAge() const 
{
    return age;
}

double Employer::getSalary() const
{
    return salary;
}