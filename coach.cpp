#include "coach.h"

Coach::Coach(std::string name, int experience) : name(name), experience(experience)
{
    std::cout << "Coach created: " << name << std::endl;
}

void Coach::displayCoachInfo() const
{
    std::cout << "Coach: " << name << ", Experience: " << experience << " years" << std::endl;
}
