#ifndef Match_h
#define Match_h

#include "Team.h"
#include <Windows.h>

class Match {
private:
	Team homeTeam;
	Team awayTeam;
	int scoreHomeTeam;
	int scoreAwayTeam;
	Team winningTeam;
	Team losingTeam;

public:
	Match(Team, Team);

	Team getHomeTeam();
	Team getAwayTeam();
	Team getWinningTeam();
	Team getLosingTeam();

	int setHomeScore();
	int setAwayScore();
	void results();
	void printMatch();
	void goToPens();
	void simulateMatch();
};
#endif