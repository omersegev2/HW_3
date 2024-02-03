#ifndef __MAGE_H__
#define __MAGE_H__

#include "Character.h"

class Mage: public Character
{
private:
    
public:
    Mage(int h, int s, int d) : Character("Mage", h, s, d){};
};


#endif //__MAGE_H__