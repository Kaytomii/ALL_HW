#pragma once

class MyString 
{
private:
    size_t size;
    char* str;
    static int counter;

public:
    MyString();
    MyString(const char* s);
    MyString(size_t s);
    ~MyString();

    size_t getSize() const;
    const char* getStr() const;
    void setStr(const char* s);

    static int getCounter();

    void myStrcpy(MyString& obj);
    void myDeleteChar(char c);
    int myCharIndex(char c);
};