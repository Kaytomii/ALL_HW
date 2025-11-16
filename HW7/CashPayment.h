#pragma once
#include "IPayment.h"

class CashPayment : public IPayment
{
public:
	void pay(double sum) override;
};

