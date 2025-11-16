#pragma once
#include <iostream>
#include "IPayment.h"
#include <string>

class ProductBase
{
protected:
	std::string title;
	double price;

public:
	ProductBase(const std::string t, double p) : title{ t }, price{ p } {};
	virtual ~ProductBase() {};

	virtual void ShowInfo() const;
	void pay(IPayment* paymentElement, double sum);
};

