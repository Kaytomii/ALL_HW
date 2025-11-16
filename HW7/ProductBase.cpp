#include "ProductBase.h"

void ProductBase::ShowInfo() const
{
	std::cout << "Товар: " << this->title << " цена: " << this->price << std::endl;
}

void ProductBase::pay(IPayment* paymentElement, double sum)
{
	paymentElement->pay(sum);
}
