#pragma once
#include "Employer.h"

class Worker : public Employer
{
public:
	void Print() const override;
};

