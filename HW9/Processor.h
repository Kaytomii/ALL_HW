#pragma once
#include <string>

class Processor 
{
private:
    std::string model;
    int cores;
    float frequency;
    bool hyperThreading;

public:
    Processor(const std::string model, int cores, float frequency, bool hyperThreading);
    void show_Processor() const;
};


