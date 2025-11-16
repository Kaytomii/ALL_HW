#pragma once
class IPayment
{
public:
	virtual void pay(double sum) = 0;
	virtual ~IPayment() {};
};

