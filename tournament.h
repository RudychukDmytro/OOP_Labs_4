#pragma once
#include <string>
#include <vector>
#include "football_team.h"
#include "referee.h"

class Tournament
{
private:
    std::string name;
    std::string location;
    Referee *referee;
    std::vector<FootballTeam *> teams;

public:
    Tournament(std::string name, std::string location, Referee *referee);
    void addTeam(FootballTeam *team);
    void displayTournamentInfo() const;
};
