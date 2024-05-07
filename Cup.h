#ifndef Cup_h
#define Cup_h

#include <list>
#include <map>
#include <queue>

#include "Match.h"

class Cup {
private:
	list<Team> teams;
	map<int, Team> table;
	queue<Match> matches;

public:
	void setTeams(list<Team>);
	void printTeams();
	void setMatches();
	void playRound();
	void displayTable();
};

#endif