#include <ctime>
#include "Cup.h"
#include "Team.h"
#include "Match.h"

int main()
{
	list<Team> teams;
	Cup ChampionsLeague;

	cout << "Welcome to the Champions League!" << endl << endl;
	cout << "You can enter up to 16 clubs, and if you want to enter less," << endl;
	cout << "there will be automatically generated clubs." << endl;
	
	string club;
	int counter = 1;
	do {
		cout << endl;
		cout << "Enter the name of your club, or 0 to proceed: " << endl;
		getline(cin, club);

		if (club == "0") break;

		Team team(club, counter);
		teams.push_back(team);

		counter++;

	} while (counter < 17);

	while (counter < 17) {
		Team team(counter);
		teams.push_back(team);
		counter++;
	}

	ChampionsLeague.setTeams(teams);

	system("cls");
	ChampionsLeague.playRound();
	system("cls");
	ChampionsLeague.displayTable();

	return 0;
}