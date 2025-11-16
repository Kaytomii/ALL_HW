#include "Keyboard.h"
#include <iostream>

Keyboard::Keyboard(const std::string layout, int keyCount, bool mechanical) : layout(layout), keyCount(keyCount), mechanical(mechanical) {}

void Keyboard::show_Keyboard() const
{
	std::cout << "Keyboard: " << layout << ", Keys: " << keyCount << ", Mechanical: " << (mechanical ? "Yes" : "No") << "\n";
}
