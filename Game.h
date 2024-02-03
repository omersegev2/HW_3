#ifndef __GAME_H__
#define __GAME_H__

#include <string>
#include <fstream> // For file operations
#include <sstream> // For split line

#include "Dungeon.h"
#include "Room.h"
#include "Character.h"
#include "Item.h"
#include "Monster.h"

// Characters
#include "Warrior.h"
#include "Mage.h"
#include "Thief.h"

// Items
#include "Sword.h"
#include "Shield.h"
#include "Potion.h"

class Game
{
private:
    static const int MAX_COMMANDS = 100;

    std::string commands[MAX_COMMANDS];

    int commandCount;

    // NEED TO BE A LIST FOR EVERYTHING HERE

public:
    Game() : commandCount(0){};

    void loadFromFile(const std::string &filename);
    void executeCommands();
    void outputFinalState(const std::string &filename);
};

#endif //__GAME_H__