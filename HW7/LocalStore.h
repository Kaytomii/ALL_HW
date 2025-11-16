#pragma once
#include "ProductBase.h"
#include <iostream>
#include <string>

class LocalStore : virtual public ProductBase
{
public:
    LocalStore(const std::string t, double p) : ProductBase(t, p) {}

    void sellOffline();
    void ShowInfo() const override;
};