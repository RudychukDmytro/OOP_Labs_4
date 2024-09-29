#ifndef FAN_H
#define FAN_H

#include <string>
#include <iostream>

class Fan
{
private:
    std::string name;     // Ім'я фаната
    int ticketsPurchased; // Кількість куплених квитків

public:
    Fan(std::string name, int ticketsPurchased);
    void displayFanInfo() const;
};

#endif
