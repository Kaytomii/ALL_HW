#include "Mouse.h"
#include <iostream>
#include "Processor.h"
#include "RAM.h"

Mouse::Mouse(const std::string brand, int dpi, bool wireless) : brand(brand), dpi(dpi), wireless(wireless) {}

void Mouse::show() const
{
	std::cout << "Mouse: " << brand << ", DPI: " << dpi << ", Wireless: " << (wireless ? "Yes" : "No") << "\n";
}
