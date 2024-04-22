#include <iostream>
#include <string>
#include <vector>

using namespace std;
	
struct QAModel {
	string questionLevel;
	string question;
	string code;
	vector <string> options;
	int answerIndex;
	time_t timer;

};

