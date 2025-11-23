#include <string>
#include "Exceptions.h"

class BankAccount 
{
private:
    std::string owner;
    double balance;

public:
    BankAccount(const std::string ownerName, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);

    void printInfo() const;
};