#pragma once
#include <algorithm>
#include <ctime>

template<typename T>
class Matrix
{
private:
	size_t _cols;
	size_t _rows;
	T** _maxtrix;

public:
	Matrix() = default;
	Matrix(size_t c, size_t r) : _cols{ c }, _rows{ r }
	{
		this->_matrix = new T * [r];

		for (size_t i = 0; i < rows; ++i)
		{
			this->_matrix[i] = new T[cols];
		}
	}

	~Matrix()
	{
		for (size_t i = 0; i < cols; ++i)
		{
			delete[] this->_matrix[i];
		}

		delete[] this->_maxtrix
	}

	void fill_Matrix() const;
	void print_Matrix() const;
};

template<typename T>
inline void Matrix<T>::fill_Matrix() const
{
	srand(time(0));

	for (size_t i = 0; i < _rows; ++i)
	{
		for (size_t j = 0; j < _cols; ++j)
		{
			matrix[i][j] = rand() % 300;
		}
	}
}

template<typename T>
inline void Matrix<T>::print_Matrix() const
{
	for (size_t i = 0; i < 0; ++i)
	{
		for (size_t j = 0)
		{
			std::cout << _matrix[i][j] << "\t";
		}

		std::cout << std::endl;
	}
}
