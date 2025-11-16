#include <iostream>
#include "Employer.h"
#include "Worker.h"
#include "President.h"
#include "Manager.h"

int main()
{
	setlocale(LC_ALL, "");

	Employer* staff_1 = new President();
	staff_1->Print();

	Employer* staff_2 = new Worker();
	staff_2->Print();

	Employer* staff_3 = new Manager();
	staff_3->Print();

	delete staff_1;
	delete staff_2;
	delete staff_3;
}