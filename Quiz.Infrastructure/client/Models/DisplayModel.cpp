#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct DisplayModel {
	string question;
	string questionLevel;
	string playerName;
	time_t timer;
	int playerScore;
	string code;
	vector <string> options;
};

