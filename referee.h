#pragma once
#include <string>

class Referee
{
private:
    std::string name;
    int experience;
    int matchesOfficiated;

public:
    Referee(std::string name, int experience, int matchesOfficiated);
    std::string getName() const; // Додайте це, якщо його немає
    void displayRefereeInfo() const;
};
