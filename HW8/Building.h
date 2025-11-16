#pragma once
#include "Apartment.h"
#include <vector>
#include <iostream>
#include <string>

class Building
{
private:
	std::string address;
	std::vector<Apartment> apartments;

public:
	Building(const std::string addr) : address{ addr } {};

	std::string getAddress() const;
	void setAddress(std::string addr);

	void addApertment(const Apartment& a);
	void showInfo_B() const;
};

