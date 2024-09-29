#pragma once
#include <string>
#include <vector>
#include "football_player.h"

class FootballTeam
{
private:
    std::string teamName;
    std::string coachName;
    int coachExperience;
    static int teamCount; // Оголошення статичної змінної
    std::vector<FootballPlayer *> players;

public:
    FootballTeam(std::string name, std::string coachName, int experience);
    ~FootballTeam();
    void addPlayer(FootballPlayer *player);
    void displayTeamInfo() const;
    static int getTeamCount(); // Оголошення статичного методу
};
