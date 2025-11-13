#include <iostream>
#include "Point.h"
#include "MyArray_TP.h"

int main()
{
	setlocale(LC_ALL, "");

	int size = 0;
	std::cin >> size;

	MyArray_TP<Point> myarr{size};

	Point sum;
	int n = 5;

	myarr.fill_Array();
	myarr.print_Array();
	myarr.Sum_Element(sum);
	myarr.ValueUp(n);
}