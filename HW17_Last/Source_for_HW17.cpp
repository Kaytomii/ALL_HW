#include <iostream>
#include "Car.h"
#include "AutoSalon.h"

int main() 
{
    setlocale(LC_ALL, "");

    AutoSalon salon;

    salon.addCar(Car("BMW X5", 25000));
    salon.addCar(Car("Audi A6", 18000));
    salon.addCar(Car("Toyota Camry", 15000));

    std::cout << " All cars in the showroom " << std::endl;

    salon.showAll();

    std::cout << "\n Search for a car " << std::endl;

    salon.findCar("Audi A6");
    salon.findCar("Mercedes C-Class");

    std::cout << "\n Remove a car " << std::endl;

    salon.removeCar("Toyota Camry");
    salon.removeCar("Mercedes C-Class");

    std::cout << "\n All cars after removal " << std::endl;
    salon.showAll();

    return 0;
}