#include "PC.h"
#include <iostream>

PC::PC(const Mouse* mouse, const Keyboard* keyboard, const std::string cpuModel, int cpuCores, float cpuFreq, bool cpuHT, const std::string ramType, int ramSize, int ramFreq, bool ramECC, const Camera* externalCamera) : mouse(mouse),
keyboard(keyboard),
processor(cpuModel, cpuCores, cpuFreq, cpuHT),
ram(ramType, ramSize, ramFreq, ramECC),
camera(externalCamera) {
}

void PC::show_PC() const
{
    std::cout << " PC Configuration \n";
    if (mouse) mouse->show();
    if (keyboard) keyboard->show_Keyboard();
    processor.show_Processor();
    ram.show_RAM();
    if (camera) camera->show_Camera();
}
