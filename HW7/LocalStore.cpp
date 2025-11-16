#include "LocalStore.h"

void LocalStore::sellOffline()
{
	std::cout << "Заказ оформлен офлайн для товара: " << title << std::endl;
}

void LocalStore::ShowInfo() const
{
	std::cout << " LocalStore ";
	ProductBase::ShowInfo();
}
