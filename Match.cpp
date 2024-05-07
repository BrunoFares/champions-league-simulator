#include "Match.h"

Match::Match(Team t1, Team t2) {
	homeTeam = t1; awayTeam = t2;
}

Team Match::getHomeTeam() { return homeTeam; }
Team Match::getAwayTeam() { return awayTeam; }
Team Match::getWinningTeam() { return winningTeam; }
Team Match::getLosingTeam() { return losingTeam; }

int Match::setHomeScore() {
	srand(time(0));
	scoreHomeTeam = rand() % 6;
	return scoreHomeTeam;
}

int Match::setAwayScore() {
	srand(time(0));
	scoreAwayTeam = rand() % 6;
	return scoreAwayTeam;
}

void Match::results() {
	if (scoreHomeTeam > scoreAwayTeam) {
		winningTeam = homeTeam;
		losingTeam = awayTeam;
	}
	else if (scoreAwayTeam > scoreHomeTeam) {
		winningTeam = awayTeam;
		losingTeam = homeTeam;
	}
	else {
		cout << "After penalties: " << endl;
		goToPens();
		printMatch();
	}
}

void Match::printMatch() {
	cout << scoreHomeTeam << " - " << scoreAwayTeam << endl;
}

void Match::goToPens() {
	do {
		setHomeScore();
		Sleep(1000);
		setAwayScore();
	} while (scoreHomeTeam == scoreAwayTeam);
	results();
}

void Match::simulateMatch() {
	setHomeScore();
	Sleep(700);
	setAwayScore();
	cout << homeTeam.getName() << " VS. " << awayTeam.getName() << endl;
	printMatch();
	results();
	cout << endl;
}