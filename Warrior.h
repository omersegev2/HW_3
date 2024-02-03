#ifndef __WORRIOR_H__
#define __WORRIOR_H__

#include "Character.h"

class Warrior: public Character
{
private:
    /* data */
public:
    Warrior(int h, int s, int d) : Character("Warrior", h, s, d){};
};

#endif //__WORRIOR_H__