#ifndef __SWORD_H__
#define __SWORD_H__

#include "Item.h"

class Sword : public Item
{
private:
    /* data */
public:
    Sword(int h, int s, int d) : Item("Sword", h, s, d){};
};

#endif //__SWORD_H__
