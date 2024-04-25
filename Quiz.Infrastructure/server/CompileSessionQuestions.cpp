#include<iostream>;
#include<vector>;
#include<random>;
#include"..\server\Models\QAModel.cpp";

using namespace std;

class compileSessionQuestions {
private:
	vector<QAModel>sessionQuestions;

public:
	void compileQuestions(const vector<QAModel>& levelQuestions) {
		for (int i = 0; i <= 4; i++) {
			int index = rand() % levelQuestions.size();
			sessionQuestions.push_back(levelQuestions[index]);
		}
	}

	vector<QAModel> getSessionQuestions() {
		return sessionQuestions;
	}
};