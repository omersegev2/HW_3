#include "Character.h"

Character::Character(char *n, int h, int s, int d) : health(h), strength(s), defense(d)
{
    name = new char[strlen(n) + 1];
    if (name == NULL)
    {
        std::cout << "Memory Allocation Fail" << std::endl;
        return;
    }
    strcpy(name, n);
}

Character::~Character()
{
    delete[] name;
}

// Function to simulate attacking a monster
void Character::attack(Monster &target){}

// Function to reduce health based on incoming damage, considering defense
void Character::defend(int damage){}

// Overloading + operator to apply item effects to the character
Character Character::operator+(const Item &item)
{
   
    return *this; 
}
