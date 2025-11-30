#include "MyString.h"
#include <iostream>

int main() 
{
    setlocale(LC_ALL, "");

    MyString s1;
    MyString s2("Hello!");
    MyString s3(10);

    std::cout << "s1: " << s1.getStr() << "\n";
    std::cout << "s2: " << s2.getStr() << "\n";
    std::cout << "s3: " << s3.getStr() << "\n";

    std::cout << "Counter: " << MyString::getCounter() << "\n";

    s1.myStrcpy(s2);
    std::cout << "s1 after copy: " << s1.getStr() << "\n";

    s2.myDeleteChar('l');
    std::cout << "s2 after delete 'l': " << s2.getStr() << "\n";

    int index = s2.myCharIndex('o');
    std::cout << "Index of 'o' in s2: " << index << "\n";

    return 0;
}