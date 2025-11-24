#pragma once
#include <string>

class Employer 
{
private:
    std::string name;
    unsigned short age;
    double salary;

public:
    Employer(std::string n, unsigned short a, double s);

    std::string getName() const;
    unsigned short getAge() const;
    double getSalary() const;
};