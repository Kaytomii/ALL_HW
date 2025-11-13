#include "MyString.h"
#include "MyArray.h"
#include <iostream>
#include <algorithm>

MyArray::MyArray()
{
	this->array = nullptr;
	this->size = 0;
}

MyArray::MyArray(int* arr, size_t s)
{
	size = s;
	array = new int[size];
	for (size_t i = 0; i < size; ++i)
	{
		array[i] = arr[i];
	}

}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	this->array = new int[size];
	for (int i = 0; i < size; ++i)
	{
		array[i] = obj.array[i];
	}
}

MyArray::MyArray(MyArray&& obj) noexcept
{
	this->array = obj.array;
	obj.array = nullptr;
}

MyArray& MyArray::operator= (MyArray&& obj) noexcept
{
	if (this->array)
	{
		delete[] this->array;
		this->array = nullptr;
	}

	this->array = obj.array;
	obj.array = nullptr;
	return *this;
}

MyArray& MyArray::operator=(const MyArray& obj) noexcept
{
	this->size = obj.size;

	if (this->array != nullptr)
	{
		delete[] array;
	}

	this->array = new int[size];
	for (size_t i = 0; i < size; ++i)
	{
		this->array[i] = obj.array[i];
	}

	return *this;
}

int* MyArray::getArray() const
{
	return this->array;
}


size_t MyArray::getSize() const
{
	return this->size;
}

void MyArray::setArray(int* arr)
{
	if (array != nullptr)
		delete[] array;

	array = new int[size];
	for (int i = 0; i < size; ++i)
	{
		array[i] = arr[i];
	}
}

void MyArray::setSize(size_t s)
{
	if (array != nullptr)
		delete[] array;

	size = s;
	array = new int[size];

}

void MyArray::print_Array() const
{
	if (array != nullptr && size > 0)
	{
		for (int i = 0; i < size; ++i)
		{
			std::cout << array[i] << " ";
		}
	}
}

void MyArray::find_sum_Array() const
{
	if (array != nullptr && size > 0)
	{
		int sum = 0;

		for (int i = 0; i < size; ++i)
		{
			sum += array[i];
		}

		std::cout << "Сумма элементов массива: " << sum;
	}

}

int MyArray::return_index_of_element(int element)
{
	if (array != nullptr && size > 0)
	{
		int indx = 0;

		for (int i = 0; i < size; ++i)
		{
			if (array[i] == element)
			{
				indx = i;
				return indx;
			}
		}

	}
	return -1;
}

void MyArray::sort_Array()
{
	if (array != nullptr && size > 0)
	{
		std::sort(array, array + size);
	}
}

int MyArray::find_Max() const
{
	if (array != nullptr && size > 0)
	{
		return *std::max_element(array, array + size); //возвращает разыменованый итератор без * он бы вернул адресс
	}
	
	else
	{
		std::cout << "Массив пустой";
		return -1;
	}
}

int MyArray::find_Min() const
{
	if (array != nullptr && size > 0)
	{
		return *std::min_element(array, array + size); //возвращает разыменованый итератор без * он бы вернул адресс
	}

	else
	{
		std::cout << "Массив пустой";
		return -1;
	}
}

MyArray::~MyArray()
{
	if (array != nullptr)
	{
		delete[] array;
	}
}