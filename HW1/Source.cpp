#include <iostream>
#include "MyArray.h"

int main()
{
	setlocale(LC_ALL, "");

	size_t size = 5;
	int* test_arr = new int[size] {9, 2, 4, 1, 3};

	MyArray arr(test_arr, size);

	std::cout << "Array before sorting: ";
	arr.print_Array();
	std::cout << std::endl;

	std::cout << "Array after sorting: ";
	arr.sort_Array();
	arr.print_Array();
	std::cout << std::endl;

	arr.find_sum_Array();
	std::cout << std::endl;

	int target = 9;
	int index = arr.return_index_of_element(target);

	if (index != -1)
	{
		std::cout << "Element: " << target << " found on position: " << index << std::endl;
	}

	else
	{
		std::cout << "Element and index not found" << std::endl;
	}

	if (test_arr != nullptr)
	{
		delete[] test_arr;
	}

	std::cout << "Max element in array: " << arr.find_Max() << std::endl;
	std::cout << "Min element in array: " << arr.find_Min() << std::endl;
}