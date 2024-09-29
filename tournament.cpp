#include "tournament.h"
#include <iostream>

Tournament::Tournament(std::string name, std::string location, Referee *referee)
    : name(name), location(location), referee(referee) {}

void Tournament::addTeam(FootballTeam *team)
{
    teams.push_back(team);
}

void Tournament::displayTournamentInfo() const
{
    std::cout << "Tournament: " << name << ", Location: " << location << std::endl;
    referee->displayRefereeInfo(); // Виклик методу рефері
    for (auto team : teams)
    {
        team->displayTeamInfo(); // Виклик методу команди
    }
}
