#include <iostream>
#include "BankAccount.h"

int main() 
{
    BankAccount acc("Ivan", 500);

    try 
    {
        acc.printInfo();

        acc.deposit(200);
        acc.printInfo();

        acc.withdraw(100);
        acc.printInfo();

        acc.withdraw(1000);
    }
    catch (const NegativeAmountException& e)
    {
        std::cout << "NegativeAmountException caught: " << e.what() << "\n";
    }

    catch (const NotEnoughFundsException& e) 
    {
        std::cout << "NotEnoughFundsException caught: " << e.what() << "\n";
    }

    try 
    {
        acc.deposit(-50);
    }
    catch (const NegativeAmountException& e) 
    {
        std::cout << "NegativeAmountException caught: " << e.what() << "\n";
    }

    return 0;
}