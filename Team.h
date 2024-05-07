#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <string>
using namespace std;

class Team {
private:
	int teamID;
	string name;

public:
	Team(string, int);
	Team(int);
	Team();
	string getName();
	int getID();
};

#endif