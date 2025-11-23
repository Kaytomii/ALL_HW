#include <string>

class NegativeAmountException 
{
private:
    std::string message;

public:
    explicit NegativeAmountException(const std::string& msg);
    const char* what() const;
};

class NotEnoughFundsException
{
private:
    std::string message;

public:
    explicit NotEnoughFundsException(const std::string& msg);
    const char* what() const;
};