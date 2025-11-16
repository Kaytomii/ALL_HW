#include "Person.h"

std::string Person::getFullName() const
{
	return this->fullName;
}

int Person::getAge() const
{
	return this->age;
}

void Person::setName(std::string n)
{
	this->fullName = n;
}

void Person::setAge(int a)
{
	if (a < 0)
	{
		std::cout << "Incorrect age";
	}

	this->age = a;
}

void Person::showInfo_P() const
{
	std::cout << "Full name: " << this->fullName << "\n Age: " << age << std::endl;
}
