#include <iostream>
#include "..\data\dataSource\dataSource.cpp"
using namespace std;

class server{
public:
	server() {
		dataSource datasource;
		datasource.populateQuestionBanks();
		datasource.getQuestionBankOne();
		datasource.getQuestionBankTwo();
		datasource.getQuestionBankThree();
	}
};