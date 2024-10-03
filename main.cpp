#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Базовий клас для Футболістів
class FootballPlayer
{
public:
    string name;
    int goals;
    int yellowCards;

    // Конструктор без параметрів
    FootballPlayer() : name("Unknown"), goals(0), yellowCards(0) {}

    // Конструктор з параметрами
    FootballPlayer(string n, int g, int y) : name(n), goals(g), yellowCards(y) {}

    // Конструктор копіювання
    FootballPlayer(const FootballPlayer &other) : name(other.name), goals(other.goals), yellowCards(other.yellowCards) {}

    // Метод для виведення даних
    void printPlayerInfo() const
    {
        cout << "Name: " << name << ", Goals: " << goals << ", Yellow Cards: " << yellowCards << endl;
    }

    // Деструктор
    virtual ~FootballPlayer()
    {
        cout << "FootballPlayer " << name << " destroyed." << endl;
    }
};

// Базовий клас для Суддів
class Referee
{
public:
    string name;

    // Конструктор без параметрів
    Referee() : name("Unknown Referee") {}

    // Конструктор з параметрами
    Referee(string n) : name(n) {}

    // Конструктор копіювання
    Referee(const Referee &other) : name(other.name) {}

    // Метод для виведення даних
    void printRefereeInfo() const
    {
        cout << "Referee Name: " << name << endl;
    }

    // Деструктор
    virtual ~Referee()
    {
        cout << "Referee " << name << " destroyed." << endl;
    }
};

// Похідний клас для Футбольної команди
class FootballTeam : public FootballPlayer
{
public:
    string teamName;
    int wins;
    int losses;

    // Конструктор без параметрів
    FootballTeam() : teamName("Unknown Team"), wins(0), losses(0) {}

    // Конструктор з параметрами
    FootballTeam(string tName, string pName, int g, int y, int w, int l)
        : FootballPlayer(pName, g, y), teamName(tName), wins(w), losses(l) {}

    // Конструктор копіювання
    FootballTeam(const FootballTeam &other) : FootballPlayer(other), teamName(other.teamName), wins(other.wins), losses(other.losses) {}

    // Метод для виведення даних
    void printTeamInfo() const
    {
        cout << "Team: " << teamName << ", Wins: " << wins << ", Losses: " << losses << endl;
        printPlayerInfo(); // Виклик методу базового класу
    }

    // Деструктор
    ~FootballTeam()
    {
        cout << "FootballTeam " << teamName << " destroyed." << endl;
    }
};

// Похідний клас для Турніру (множинне наслідування)
class Tournament : public FootballTeam, public Referee
{
public:
    string location;
    string date;

    // Конструктор без параметрів
    Tournament() : location("Unknown Location"), date("Unknown Date") {}

    // Конструктор з параметрами
    Tournament(string loc, string d, string tName, string pName, int g, int y, int w, int l, string rName)
        : FootballTeam(tName, pName, g, y, w, l), Referee(rName), location(loc), date(d) {}

    // Конструктор копіювання
    Tournament(const Tournament &other)
        : FootballTeam(other), Referee(other), location(other.location), date(other.date) {}

    // Метод для виведення даних
    void printTournamentInfo() const
    {
        cout << "Tournament Location: " << location << ", Date: " << date << endl;
        printTeamInfo();
        printRefereeInfo();
    }

    // Деструктор
    ~Tournament()
    {
        cout << "Tournament destroyed." << endl;
    }
};

int main()
{
    // Створення екземплярів класів
    FootballPlayer player("John Doe", 10, 2);
    Referee ref("James Smith");
    FootballTeam team("SuperStars", "John Doe", 10, 2, 5, 1);
    Tournament tournament("Stadium A", "2024-10-10", "SuperStars", "John Doe", 10, 2, 5, 1, "James Smith");

    // Виведення інформації
    player.printPlayerInfo();
    ref.printRefereeInfo();
    team.printTeamInfo();
    tournament.printTournamentInfo();

    return 0;
}
