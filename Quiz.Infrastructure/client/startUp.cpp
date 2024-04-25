#include "..\server\server.cpp";
#include "Models\DisplayModel.cpp";

class StartUp {
	
public:
	StartUp(Server &server) {
		//Server server;
		vector<DisplayModel> contextSessionQuestions;
		for (int i = 0; i < server.getContextSessionQuestions().size(); i++)
		{
			DisplayModel displaymodel;
			displaymodel.sessionquestionmodel= server.getContextSessionQuestions()[i];
			contextSessionQuestions.push_back(displaymodel);
		}
		
	}
	
};