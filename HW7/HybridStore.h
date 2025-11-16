#pragma once
#include "OnlineStore.h"
#include "LocalStore.h"
#include <iostream>
#include <string>

class HybridStore : public OnlineStore, public LocalStore {
public:
    HybridStore(const std::string t, double p) : ProductBase(t, p), OnlineStore(t, p), LocalStore(t, p) {}

    void ShowInfo() const override;
};