#ifndef __THIEF_H__
#define __THIEF_H__

#include "Character.h"

class Thief: public Character
{
private:
    /* data */
public:
    Thief(int h, int s, int d) : Character("Thief", h, s, d){};
};

#endif //__THIEF_H__
