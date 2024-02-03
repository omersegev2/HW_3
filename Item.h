#ifndef __ITEM_H__
#define __ITEM_H__

#include <cstring>
#include <iostream>

class Item
{
private:
    char *name;
    int healthBonus;
    int strengthBonus;
    int defenseBonus;

public:
    Item(char *n, int h, int s, int d);

    ~Item() { delete[] name; };

    char *getName() { return name; };
    int getStrengthBonus() { return strengthBonus; }
    int getDefenseBonus() { return defenseBonus; }
    int getHealthBonus() { return healthBonus; }
};

#endif //__ITEM_H__