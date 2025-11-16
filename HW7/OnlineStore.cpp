#include "OnlineStore.h"

void OnlineStore::orderOnline()
{
	std::cout << "Заказ онлайн товара оформлен: " << title << std::endl;
}

void OnlineStore::ShowInfo() const
{
	std::cout << " OnlineStore ";
	ProductBase::ShowInfo();
}
