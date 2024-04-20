#include <iostream>
#include <string>
#include <array>
#include <iostream>
using namespace std;
	
struct QAModel {
	string questionLevel;
	string question;
	string code;
	array <string, 4> options;
	int answerIndex;
	time_t timer;

};