#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string ownerName, double initialBalance) : owner(ownerName), balance(initialBalance) 
{

}

void BankAccount::deposit(double amount) 
{
    if (amount <= 0) 
    {
        throw NegativeAmountException("Deposit amount must be positive");
    }

    balance += amount;
}

void BankAccount::withdraw(double amount) 
{
    if (amount <= 0) 
    {
        throw NegativeAmountException("Withdraw amount must be positive");
    }

    if (amount > balance) 
    {
        throw NotEnoughFundsException("Not enough funds to withdraw");
    }
    balance -= amount;
}

void BankAccount::printInfo() const 
{
    std::cout << "Owner: " << owner << ", Balance: " << balance << "\n";
}