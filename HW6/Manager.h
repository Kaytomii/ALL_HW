#pragma once
#include "Employer.h"

class Manager : public Employer
{
public:
	void Print() const override;
};

