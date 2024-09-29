#include "fan.h"

Fan::Fan(std::string name, int ticketsPurchased) : name(name), ticketsPurchased(ticketsPurchased)
{
    std::cout << "Fan created: " << name << std::endl;
}

void Fan::displayFanInfo() const
{
    std::cout << "Fan: " << name << ", Tickets Purchased: " << ticketsPurchased << std::endl;
}
