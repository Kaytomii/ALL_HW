#pragma once
#include <iostream>
#include <vector>
#include <ctime>

template <typename T>
class Matrix 
{
    int rows, cols;
    std::vector<std::vector<T>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<T>(c)) {}

    void fill_input()
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                std::cin >> data[i][j];
            }
        }
    }

    void fill_random(T min_val, T max_val) 
    {
        srand(time(0));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                data[i][j] = min_val + rand() % (int)(max_val - min_val + 1);
            }
        }
    }

    void display() const 
    {
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j)
            {
                std::cout << data[i][j] << " ";
            }

            std::cout << "\n";
        }
    }

    Matrix operator+(const Matrix& other) const 
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }  
        }

        return result;
    }

    Matrix operator-(const Matrix& other) const
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }

        return result;
    }

    Matrix operator*(const Matrix& other) const 
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.data[i][j] = data[i][j] * other.data[i][j];
            }
        }

        return result;
    }

    Matrix operator/(const Matrix& other) const 
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                result.data[i][j] = data[i][j] / other.data[i][j];
            }
        }

        return result;
    }

    T min_element() const 
    {
        T minVal = data[0][0];
        for (const auto row : data)
        {
            for (const auto el : row)
            {
                if (el < minVal) minVal = el;
            }
        }

        return minVal;
    }

    T max_element() const 
    {
        T maxVal = data[0][0];
        for (const auto& row : data)
        {
            for (const auto& el : row)
            {
                if (el > maxVal) maxVal = el;
            }
        }

        return maxVal;
    }
};