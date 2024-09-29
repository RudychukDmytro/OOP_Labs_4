#include "football_team.h"
#include <iostream>

// Визначення статичної змінної
int FootballTeam::teamCount = 0;

FootballTeam::FootballTeam(std::string name, std::string coachName, int experience)
    : teamName(name), coachName(coachName), coachExperience(experience)
{
    teamCount++;
}

FootballTeam::~FootballTeam()
{
    teamCount--;
}

void FootballTeam::addPlayer(FootballPlayer *player)
{
    players.push_back(player);
}

void FootballTeam::displayTeamInfo() const
{
    std::cout << "Team: " << teamName << ", Coach: " << coachName << std::endl;
    for (auto player : players)
    {
        player->displayPlayerInfo();
    }
}

int FootballTeam::getTeamCount()
{
    return teamCount;
}
