#include <iostream>
#include <vector>
#include <algorithm>
#include "Employer.h"

std::ostream& operator<<(std::ostream& os, const Employer& emp) {
    os << "Name: " << emp.getName()
        << " Age: " << emp.getAge()
        << " Salary: " << emp.getSalary();

    return os;
}

bool hasHighSalary(const Employer& e) 
{
    return e.getSalary() > 10000;
}

bool sort_Salary(const Employer& a, const Employer& b) 
{
    return a.getSalary() < b.getSalary();
}

int main() 
{
    setlocale(LC_ALL, "");

    std::vector<Employer> employers = 
    {
        {"Tom", 20, 4000},
        {"Alex", 30, 12000},
        {"Alice", 25, 2500},
        {"Bob", 40, 15000},
        {"John", 35, 8000}
    };

    std::cout << "All employers:\n";
    for (const auto& e : employers) 
    {
        std::cout << e << std::endl;
    }

    auto countHighSalary = std::count_if(employers.begin(), employers.end(), hasHighSalary);
    std::cout << "\nEmployers with salary > 10000: " << countHighSalary << std::endl;

    std::sort(employers.begin(), employers.end(), sort_Salary);

    std::cout << "\nEmployers sorted by salary:\n";
    for (const auto& e : employers)
    {
        std::cout << e << std::endl;
    }

    auto maxIt = std::max_element(employers.begin(), employers.end(), sort_Salary);
    if (maxIt != employers.end()) 
    {
        std::cout << "\nEmployer with max salary:\n" << *maxIt << std::endl;
    }

    return 0;
}