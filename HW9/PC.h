#pragma once
#include "Mouse.h"
#include "Keyboard.h"
#include "Processor.h"
#include "RAM.h"
#include "Camera.h"

class PC {
    const Mouse* mouse;       // агрегация
    const Keyboard* keyboard; // агрегация
    Processor processor;      // композиция
    RAM ram;                  // композиция
    const Camera* camera;     // агрегация

public:
    PC(const Mouse* mouse,
        const Keyboard* keyboard,
        const std::string cpuModel, int cpuCores, float cpuFreq, bool cpuHT,
        const std::string ramType, int ramSize, int ramFreq, bool ramECC,
        const Camera* externalCamera);

    void show_PC() const;
};
