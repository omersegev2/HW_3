#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <cstring>

#include "Item.h"
#include "Monster.h"

class Character
{
private:
    char *name;
    int health;
    int strength;
    int defense;

public:
    Character(char *n, int h, int s, int d);
    ~Character();

    // Simulates attacking a monster.
    void attack(Monster &target);

    // Reduces health based on incoming damage, considering defense.
    void defend(int damage);

    // Checks if the character's health is above 0;
    bool isAlive() const { return health > 0; }

    // Overloads the + operator to apply item effects to the character.
    Character operator+(const Item &item);

    char *getName() { return name; }
    int getStrength() { return strength; }
    int getDefense() { return defense; }
    int getHealth() { return health; }
};

#endif // __CHARACTER_H__