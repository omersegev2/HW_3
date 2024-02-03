#include "Dungeon.h"

Dungeon::Dungeon() : startRoom(nullptr), rooms(nullptr), room_count(0) {}

// Defines the starting room of the dungeon.
void Dungeon::setStartRoom(Room *room)
{
    startRoom = room;
}

// Adds a room to the dungeon's rooms array.
void Dungeon::addRoom(Room *room)
{
    Room **newRooms = new Room *[room_count + 1];
    if (newRooms == NULL)
    {
        std::cout << "Memory Allocation Fail" << std::endl;
        return;
    }

    for (int i = 0; i < room_count; i++)
    {
        newRooms[i] = rooms[i];
    }

    delete[] rooms;
    rooms = newRooms;

    rooms[room_count++] = room;
}

// Searches for and returns a room by its name.
Room *Dungeon::findRoom(char *name)
{
    for (int i = 0; i < room_count; i++)
    {
        if (strcmp(rooms[i]->getName(), name) == 0)
        {
            return rooms[i];
        }
    }
    return nullptr;
}
