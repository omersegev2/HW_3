#include "Game.h"

void Game::loadFromFile(const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line) && commandCount < MAX_COMMANDS)
    {
        if (!line.empty() && line.substr(0, 2) != "//")
        {
            commands[commandCount++] = line;
        }
    }
    file.close();
}

void Game::executeCommands()
{
    for (int i = 0; i < commandCount; i++)
    {
        std::istringstream iss(commands[i]);
        std::string word;
        while (iss >> word)
        {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }
}

void Game::outputFinalState(const std::string &filename) {}
