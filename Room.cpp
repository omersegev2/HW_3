#include "Room.h"

Room::Room(char *n) :north(nullptr), south(nullptr), east(nullptr), west(nullptr), item(nullptr), monster(nullptr)
{

    name = new char[strlen(n) + 1];
    if (name == NULL)
    {
        std::cout << "Memory Allocation Fail" << std::endl;
    }
    strcpy(name, n);
}

Room::~Room()
{
    delete[] name;
}

void Room::connectNorth(Room *room)
{
    north = room;
}

void Room::connectSouth(Room *room)
{
    south = room;
}

void Room::connectEast(Room *room)
{
    east = room;
}

void Room::connectWest(Room *room)
{
    west = room;
}

void Room::setItem(Item *i)
{
    item = i;
}

void Room::setMonster(Monster *m)
{
    monster = m;
}