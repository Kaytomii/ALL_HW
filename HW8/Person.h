#pragma once
#include <iostream>
#include <string>

class Person
{
private:
	std::string fullName;
	int age;

public:
	Person(const std::string n, int a) : fullName{ n }, age{ a } {};
	
	std::string getFullName() const;
	int getAge() const;

	void setName(std::string n);
	void setAge(int a);
	void showInfo_P() const;

};

