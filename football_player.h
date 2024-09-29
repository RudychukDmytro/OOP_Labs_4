#pragma once
#include <string>

class FootballPlayer
{
private:
    std::string name;
    int goals;
    int yellowCards;
    int salary;

public:
    FootballPlayer(std::string name, int goals, int yellowCards, int salary);
    void displayPlayerInfo() const;
};
