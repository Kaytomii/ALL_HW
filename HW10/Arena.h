#pragma once
#include <vector>
#include "Character.h"

class Arena 
{
private:
    std::vector<Character*> fighters;

public:
    ~Arena();
    void add(Character* fighter);
    void remove(int index);
    void show() const;
    void attackAll() const;

    Arena& operator+(Character* fighter);
    void print(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, const Arena& arena);