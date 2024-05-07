#include "Cup.h"

void Cup::setTeams(list<Team> teams) {
    for (Team item : teams) {
        this->teams.push_back(item);
    }
}

void Cup::printTeams() {
    cout << "The teams competing in this year's Champions League: " << endl << endl;
    for (Team item : teams) {
        cout << item.getID() << "   " << item.getName() << endl;
    }
    cout << endl;
}

void Cup::setMatches() {
    for (list<Team>::const_iterator it = teams.begin(); it != teams.end(); it++) {
        Team team1 = *it;
        advance(it, 1);
        Team team2 = *it;
        Match match(team1, team2);
        matches.push(match);
    }
    teams.clear();
}

void Cup::playRound() {
    setMatches();
    int counter = 1;

    cout << "Round of " << matches.size() * 2 << endl;

    int position = matches.size() * 2;

    while (!matches.empty()) {
        position -= 1;
        Sleep(800);
        
        matches.front().simulateMatch();
        teams.push_back(matches.front().getWinningTeam());

        table[position] = matches.front().getLosingTeam();
        table[0] = matches.front().getWinningTeam();

        matches.pop();
    }

    string key;
    cout << "Enter any key to continue..." << endl;
    cin >> key;

    system("cls");
    if (teams.size() > 1)
    playRound();
}

void Cup::displayTable() {
    cout << "The winning team is " << table[0].getName() << ". Congratulations!" << endl;
    for (pair<int, Team> teams : table) {
        cout << ++teams.first << " - " << teams.second.getName() << endl;
    }
}
