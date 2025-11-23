#include "Exceptions.h"

NegativeAmountException::NegativeAmountException(const std::string& msg) : message(msg) 
{

}

const char* NegativeAmountException::what() const 
{
    return message.c_str(); // c.str() нужен чтобы вернуть указатель на const char*
}

NotEnoughFundsException::NotEnoughFundsException(const std::string& msg) : message(msg) 
{

}

const char* NotEnoughFundsException::what() const 
{
    return message.c_str();
}