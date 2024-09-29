#include "football_player.h"
#include <iostream>

FootballPlayer::FootballPlayer(std::string name, int goals, int yellowCards, int salary)
    : name(name), goals(goals), yellowCards(yellowCards), salary(salary) {}

void FootballPlayer::displayPlayerInfo() const
{
    std::cout << "Player: " << name << ", Goals: " << goals
              << ", Yellow Cards: " << yellowCards
              << ", Salary: " << salary << std::endl;
}
