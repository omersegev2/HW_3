#ifndef __POTION_H__
#define __POTION_H__

#include "Item.h"

class Potion: public Item
{
private:
    /* data */
public:
    Potion(int h, int s, int d) : Item("Potion", h, s, d){};
};

#endif //__POTION_H__