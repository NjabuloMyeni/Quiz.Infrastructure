#include <iostream>
#include <vector>
#include "..\data\dataSource\dataSource.cpp"

using namespace std;

int main()
{
    dataSource datasource;
    vector<QAModel> questions = datasource.readQuestionsFromFile("./data/dataFactory/QABankOne.txt", "level");
   
    cout << "Team Innovators :"<<questions.size();
}