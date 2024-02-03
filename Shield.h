#ifndef __SHIELD_H__
#define __SHIELD_H__

#include "Item.h"

class Shield: public Item
{
private:
    /* data */
public:
    Shield(int h, int s, int d) : Item("Shield", h, s, d){};
};

#endif //__SHIELD_H__
