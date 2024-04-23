#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include "QAModel.cpp";

using namespace std;

struct SessionQuestions {
	
	string userAnswer;
	time_t timer;
	QAModel questionModel;

};