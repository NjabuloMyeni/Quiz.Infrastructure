#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "..\..\server\Models\QAModel.cpp"

using namespace std;

class dataSource {

private:
    vector<QAModel> questions;

public:

    vector<QAModel> readQuestionsFromFile(const string & filename, string level) {

        vector<QAModel> questionLoader;
        string line;
        ifstream fileReader(filename);
        
        if (!fileReader.is_open()) {
            cerr << "Error: Unable to open file" << filename << endl;
            return questionLoader;
        }

        while (getline(fileReader,line, '~')) {
            QAModel question;
            question.questionLevel = level;
            question.question = line;
            getline(fileReader, line, '~');
            question.code = line;
            getline(fileReader, line, '@');
            question.options = splitString(line, ';');
            questionLoader.push_back(question);
        }
        return questionLoader;
    }
    vector<string>splitString(string line, char delimeter) {
        vector<string>splitedString;
        string temp;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == delimeter || line.length() - i == 1) {
                splitedString.push_back(temp);
                temp = "";
            }
            else {
                temp += line[i];
            }    
        }
        return splitedString;
    }
};