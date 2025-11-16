#pragma once
#include <vector>
#include "Person.h"

class Apartment
{
private:
	int number;
	std::vector<Person> residents;

public:
	Apartment(int n) : number{ n } {};

	int getNumber() const;
	void setNumber(int n);

	void AddResident(const Person& p);
	void showInfo_A() const;
};

