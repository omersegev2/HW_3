#ifndef __DUNGEON_H__
#define __DUNGEON_H__

#include "Room.h"

class Dungeon
{
private:
    Room *startRoom;
    Room **rooms;
    int room_count;

public:
    Dungeon();

    ~Dungeon()
    {
        delete[] rooms;
    }

    // Defines the starting room of the dungeon.
    void setStartRoom(Room *room);

    // Adds a room to the dungeon's rooms array.
    void addRoom(Room *room);

    // Searches for and returns a room by its name.
    Room *findRoom(char *name);

    Room *getStartRoom() { return startRoom; }
    int getRoomCount() {return room_count; }
};

#endif //__DUNGEON_H__