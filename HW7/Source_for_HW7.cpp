#include <iostream>
#include "CashPayment.h"
#include "CardPayment.h"
#include "LocalStore.h"
#include "ProductBase.h"
#include "HybridStore.h"
#include "OnlineStore.h"

int main()
{
	setlocale(LC_ALL, "");

	HybridStore hybrid("Ноутбук", 10000);
	hybrid.ShowInfo();

	hybrid.orderOnline();
	hybrid.sellOffline();

	CardPayment card;
	CashPayment cash;

	hybrid.pay(&cash, 10000);

	hybrid.pay(&card, 10000);

	return 0;
}