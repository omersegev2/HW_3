#ifndef __ROOM_H__
#define __ROOM_H__

#include "Monster.h"
#include "Item.h"

class Room
{
private:
    char *name;
    Room *north, *south, *east, *west;
    Item *item;
    Monster *monster;

public:
    Room(char *n);
    ~Room();

    // Sets the northern connection.
    void connectNorth(Room *room);

    // Sets the southern connection.
    void connectSouth(Room *room);
    // Sets the eastern connection.
    void connectEast(Room *room);

    // Sets the western connection.
    void connectWest(Room *room);

    // Places an item in the room.
    void setItem(Item *i);

    // Places a monster in the room.
    void setMonster(Monster *m);

    char *getName() { return name; };
    Monster *getMonster() { return monster; };
    Item *getItem() { return item; };
};

#endif //__ROOM_H__