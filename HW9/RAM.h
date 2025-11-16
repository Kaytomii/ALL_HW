#pragma once
#include <string>

class RAM 
{
private:
    std::string type;
    int sizeGB;
    int frequencyMHz;
    bool ecc;

public:
    RAM(const std::string type, int sizeGB, int frequencyMHz, bool ecc);
    void show_RAM() const;
};

