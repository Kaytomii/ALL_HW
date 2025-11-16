#include <iostream>
#include "Building.h"
#include "Apartment.h"
#include "Person.h"

int main()
{
	setlocale(LC_ALL, "");

    Person p1("Иван Иванович", 35);
    Person p2("Алена Аленович", 30);
    Person p3("Остап Остапович", 42);

    Apartment a1(101);
    a1.AddResident(p1);
    a1.AddResident(p2);

    Apartment a2(102);
    a2.AddResident(p3);

    Building b("улица Пушкина дом колотушкина, 12");
    b.addApertment(a1);
    b.addApertment(a2);

    b.showInfo_B();

    return 0;

}