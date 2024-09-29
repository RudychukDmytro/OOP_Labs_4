#include "referee.h"
#include <iostream>

Referee::Referee(std::string name, int experience, int matchesOfficiated)
    : name(name), experience(experience), matchesOfficiated(matchesOfficiated) {}

std::string Referee::getName() const
{
    return name;
}

void Referee::displayRefereeInfo() const
{
    std::cout << "Referee: " << name << ", Experience: " << experience
              << ", Matches Officiated: " << matchesOfficiated << std::endl;
}
