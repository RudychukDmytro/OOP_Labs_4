#ifndef COACH_H
#define COACH_H

#include <string>
#include <iostream>

class Coach
{
private:
    std::string name; // Ім'я тренера
    int experience;   // Досвід в роках

public:
    Coach(std::string name, int experience);
    void displayCoachInfo() const;
};

#endif
