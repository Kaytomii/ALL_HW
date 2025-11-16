#pragma once
#include "IPayment.h"

class CardPayment : public IPayment
{
public:
	void pay(double sum) override;
};

