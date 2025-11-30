#include "MyString.h"
#include <cstring>

int MyString::counter = 0;

MyString::MyString() : size(0), str(new char[1] { '\0' }) 
{
    counter++;
}

MyString::MyString(const char* s) : size(strlen(s)), str(new char[size + 1]) 
{
    strcpy_s(str, size +1, s);
    counter++;
}

MyString::MyString(size_t s) : size(s), str(new char[s + 1]) 
{
    for (size_t i = 0; i < s; ++i) 
    {
        str[i] = '_';
    }

    str[s] = '\0';
    counter++;
}

MyString::~MyString() 
{
    delete[] str;
    counter--;
}

size_t MyString::getSize() const 
{
    return size;
}

const char* MyString::getStr() const 
{
    return str;
}

void MyString::setStr(const char* s) 
{
    delete[] str;
    size = strlen(s);
    str = new char[size + 1];
    strcpy_s(str, size + 1, s);
}

int MyString::getCounter() 
{
    return counter;
}

void MyString::myStrcpy(MyString& obj) 
{
    setStr(obj.str);
}

void MyString::myDeleteChar(char c) 
{
    int idx = myCharIndex(c);

    if (idx == -1) 
    {
        return;
    }

    for (size_t i = idx; i < size; ++i) 
    {
        str[i] = str[i + 1];
    }

    size--;
}

int MyString::myCharIndex(char c) 
{
    for (size_t i = 0; i < size; ++i) 
    {
        if (str[i] == c) 
        {
            return static_cast<int>(i);
        }
    }

    return -1;
}