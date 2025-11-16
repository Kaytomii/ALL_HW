#include "RAM.h"
#include <iostream>

RAM::RAM(const std::string type, int sizeGB, int frequencyMHz, bool ecc) : type(type), sizeGB(sizeGB), frequencyMHz(frequencyMHz), ecc(ecc) {}

void RAM::show_RAM() const
{
	std::cout << "RAM: " << type << ", Size: " << sizeGB << "Frequency: " << frequencyMHz << "ECC: " << (ecc ? "Yes" : "No") << "\n";
}
