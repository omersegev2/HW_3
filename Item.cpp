#include "Item.h"


Item::Item(char *n, int h, int s, int d): healthBonus(h), strengthBonus(s), defenseBonus(d)
{
    name = new char[strlen(n) + 1];
    if (name == NULL)
    {
        std::cout << "Memory Allocation Fail" << std::endl;
    }
    strcpy(name, n);
}