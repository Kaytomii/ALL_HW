#pragma once
#include <iostream>
#include "Point.h"

template<typename T>
class MyArray_TP
{
private:
	int size;
	T* arr;

public:
	MyArray_TP() = default;
	MyArray_TP(int size);
	~MyArray_TP();

	void fill_Array();
	void print_Array();
	void ValueUp(int n);
	void Sum_Element(Point sum);
};

template<typename T>
inline MyArray_TP<T>::MyArray_TP(int s) : size{s}
{
	if (size < 0)
	{
		std::cerr << "Invalid value";
	}
	
	arr = new T[size];
}

template<typename T>
inline MyArray_TP<T>::~MyArray_TP()
{
	if (this->arr != nullptr)
	{
		delete[] this->arr;
	}
}

template<typename T>
inline void MyArray_TP<T>::fill_Array()
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Enter element [" << i << "]: ";
		std::cin >> arr[i];
	}
}

template<typename T>
inline void MyArray_TP<T>::print_Array()
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Element [" << i << "]: " << arr[i] << std::endl;
	}
}

template<typename T>
inline void MyArray_TP<T>::ValueUp(int n)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] += n;
	}

	std::cout << "Array after valueUp: " << std::endl;
	print_Array();
}

template<typename T>
inline void MyArray_TP<T>::Sum_Element(Point sum)
{
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	std::cout << "Sum of elements is: " << sum << std::endl;
}
