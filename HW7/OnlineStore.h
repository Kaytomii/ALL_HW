#pragma once
#include "ProductBase.h"
#include <iostream>
#include <string>

class OnlineStore : virtual public ProductBase {
public:
    OnlineStore(const std::string t, double p) : ProductBase(t, p) {}

    void orderOnline();
    void ShowInfo() const override;
};


