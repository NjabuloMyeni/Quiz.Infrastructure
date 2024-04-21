#include <iostream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
	
struct QAModel {
	string questionLevel;
	string question;
	string code;
	vector <string> options;
	int answerIndex;
	time_t timer;

};

vector<QAModel>shuffle_and_stack(vector<QAModel>& questions, vector<int>& askedIndices) {

	// Remove already asked questions
	vector<QAModel> filteredQuestions;
	for (int i = 0; i < questions.size(); ++i) {
		if (find(askedIndices.begin(), askedIndices.end(), i) == askedIndices.end()) {
			filteredQuestions.push_back(questions[i]);
		}
	}

	// Stack the indices of the asked questions
	for (int i = 0; i < filteredQuestions.size(); ++i) {
		int index = find(questions.begin(), questions.end(), filteredQuestions[i]) - questions.begin();
		askedIndices.push_back(index);
	}
	return filteredQuestions;
};