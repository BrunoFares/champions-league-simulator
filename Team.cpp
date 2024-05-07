#include "Team.h"

Team::Team(string n, int id) {
	name = n;
	teamID = id;
}

Team::Team(int id) {
	Team("Team " + to_string(id), id);
}

Team::Team() {
	Team("Random Team", 0);
}

string Team::getName() { return name; }

int Team::getID() { return teamID; }