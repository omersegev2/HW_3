#include "Monster.h"


Monster::Monster(char *n, int h, int s, int d) : health(h), strength(s), defense(d)
{
    name = new char[strlen(n) + 1];
    if (name == NULL)
    {
        std::cout << "Memory Allocation Fail" << std::endl;
        return;
    }
    strcpy(name, n);
}

Monster::Monster(const Monster &other) : health(other.health), strength(other.strength), defense(other.defense)
{
    name = new char[strlen(other.name) + 1];
    if (name == NULL)
    {
        std::cout << "Memory Allocation Fail" << std::endl;
        return;
    }
    strcpy(name, other.name);
}

Monster::~Monster()
{
    delete[] name;
}

// void attack(Characther& target);

Monster& Monster::operator=(const Monster &other)
{
    if (this != &other)
    {
        delete[] name;

        health = other.health;
        strength = other.strength;
        defense = other.defense;

        name = new char[strlen(other.name) + 1];
        if (name == NULL)
        {
            std::cout << "Memory Allocation Fail" << std::endl;
        }
        strcpy(name, other.name);
    }
    return *this;
}