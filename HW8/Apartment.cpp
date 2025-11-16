#include "Apartment.h"

int Apartment::getNumber() const
{
	return number;
}

void Apartment::setNumber(int n)
{
	this->number = n;
}

void Apartment::AddResident(const Person& p)
{
	residents.push_back(p);
}

void Apartment::showInfo_A() const
{
	std::cout << "Квартира номер: " << number << "\n Жителе: " << residents.size() << std::endl;
	for (const auto& r : residents)
	{
		r.showInfo_P();
	}
}
