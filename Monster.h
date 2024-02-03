#ifndef __MONSTER_H__
#define __MONSTER_H__

#include <cstring>
#include <iostream>

class Monster
{
private:
    char *name;
    int health;
    int strength;
    int defense;

public:
    Monster(char *n = nullptr, int h = 0, int s = 0, int d = 0);
    Monster(const Monster &other);
    ~Monster();

    // Simulates attacking a character.
    //  void attack(Characther& target);

    // Checks if the monster's health is 0 or less.
    bool isDefeated() { return health <= 0; }

    Monster &operator=(const Monster &other);

    char *getName() { return name; };
};

#endif //__MONSTER_H__