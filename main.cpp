#include <iostream>
#include "football_team.h"
#include "referee.h"
#include "tournament.h"

int main()
{
    // Створення судді з передачею параметрів до конструктора базового класу
    Referee *referee = new Referee("John Doe", 10, 50);
    referee->displayRefereeInfo(); // Виклик функції для відображення інформації про суддю

    // Створення футбольних команд
    FootballTeam *teamA = new FootballTeam("Team A", "Coach A", 5);
    FootballTeam *teamB = new FootballTeam("Team B", "Coach B", 3);

    // Створення футболістів для кожної команди
    FootballPlayer *player1 = new FootballPlayer("Player 1", 10, 2, 5000);
    FootballPlayer *player2 = new FootballPlayer("Player 2", 5, 1, 4000);
    FootballPlayer *player3 = new FootballPlayer("Player 3", 8, 3, 4500);

    // Додавання футболістів до команд
    teamA->addPlayer(player1);
    teamA->addPlayer(player2);
    teamB->addPlayer(player3);

    // Створення турніру та додавання команд
    Tournament *tournament = new Tournament("Stadium", "2024-09-29", referee);
    tournament->addTeam(teamA);
    tournament->addTeam(teamB);

    // Виведення інформації про турнір
    tournament->displayTournamentInfo();

    // Звільнення пам'яті
    delete referee;
    delete teamA;
    delete teamB;
    delete tournament;

    return 0;
}
