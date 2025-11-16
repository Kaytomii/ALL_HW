#include <iostream>
#include "PC.h"
#include "Mouse.h"
#include "Keyboard.h"
#include "Camera.h"

int main()
{
	setlocale(LC_ALL, "");

    Mouse m("Ajazz", 1600, true);
    Keyboard k("QWERTY", 104, true);
    Camera cam("1080p", true);

    PC myPC(&m, &k,
        "Intel i7-12700K", 12, 3.8, true,
        "DDR4", 16, 3200, false,
        &cam);

    myPC.show_PC();

    return 0;
}