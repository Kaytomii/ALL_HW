#include "Processor.h"
#include <iostream>

Processor::Processor(const std::string model, int cores, float frequency, bool hyperThreading) : model(model), cores(cores), frequency(frequency), hyperThreading(hyperThreading) {}

void Processor::show_Processor() const
{
	std::cout << "Processor: " << model << ", Cores: " << cores << ", Frequency: " << frequency << "HyperThreading: " << (hyperThreading ? "Yes" : "No") << "\n";
}
