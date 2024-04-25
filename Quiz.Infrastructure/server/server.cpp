#include <iostream>;
#include <vector>;
#include "..\data\dataSource\dataSource.cpp";
#include "CompileSessionQuestions.cpp";
#include "Models/SessionQuestionModel.cpp";
#pragma once;

using namespace std;

class Server{
private:
	compileSessionQuestions sessionQuestions;

public:
	Server() {
		dataSource data;
		data.populateQuestionBanks();
		sessionQuestions.compileQuestions(data.getQuestionBankOne());
		sessionQuestions.compileQuestions(data.getQuestionBankTwo());
		sessionQuestions.compileQuestions(data.getQuestionBankThree());
	}

	vector<SessionQuestionsModel> getContextSessionQuestions() {
		vector<SessionQuestionsModel> contextSessionQuestions;
		for (int i = 0; i < sessionQuestions.getSessionQuestions().size(); i++)
		{
			SessionQuestionsModel sessionquestionmodel;
			sessionquestionmodel.questionModel = sessionQuestions.getSessionQuestions()[i];
			contextSessionQuestions.push_back(sessionquestionmodel);
		}
		return contextSessionQuestions;
	}
	
};