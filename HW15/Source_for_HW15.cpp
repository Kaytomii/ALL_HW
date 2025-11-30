#include "Matrix.h"

int main() 
{
    setlocale(LC_ALL, "");

    Matrix<int> A(3, 3), B(3, 3);

    A.fill_random(1, 9);
    B.fill_random(1, 9);

    std::cout << "Matrix A:\n";
    A.display();

    std::cout << "Matrix B:\n";
    B.display();

    Matrix<int> C = A + B;
    std::cout << "A + B:\n";
    C.display();

    std::cout << "Min in A: " << A.min_element() << "\n";
    std::cout << "Max in A: " << A.max_element() << "\n";

}