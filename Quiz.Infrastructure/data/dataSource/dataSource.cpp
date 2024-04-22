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

    vector<QAModel> readQuestionsFromFile(const string & filename) {
        // Vector to store questions
        ifstream file;   // Open the file
        file.open(filename);

        if (!file.is_open()) {
            cerr << "Error: Unable to open file " << filename << endl;
            return questions;
        }

        string line;
        while (getline(file, line)) {
            // Split the line into question, code question, and answer options
            /*vector<string> parts = split(line, "~");

            if (parts.size() != 3) {
                cerr << "Invalid question format in file: " << filename << endl;
                continue;
            }

            string question = parts[0]; // Extract question
            string codeQuestion = parts[1]; // Extract code question
            string optionsStr = parts[2]; // Extract answer options

            // Split options string into individual options
            vector<string> options = split(optionsStr, ";");

            // Extract correct answer from options
            string correctAnswer;
            if (!options.empty()) {
                correctAnswer = options.back(); // Last option is the correct answer
                options.pop_back(); // Remove the correct answer from options
            }

            // Create QAModel object and add to questions vector
            QAModel qa;
            qa.questionLevel = "unknown"; // You might want to set the question level here
            qa.question = question + "~" + codeQuestion; // Concatenate question and code question
            qa.options = convertToOptionsArray(options);
            // Find the correct answer index
            for (size_t i = 0; i < options.size(); ++i) {
                if (options[i] == correctAnswer) {
                    qa.answerIndex = i;
                    break;
                }
            }
            questions.push_back(qa);*/
            cout << line;
        }

        file.close();
        return questions;
    }

    // Function to split a string based on a delimiter and return the parts as a vector
    /*vector<string> split(const string& s, const string& delimiter) {
        vector<string> parts;
        size_t start = 0;
        size_t end = s.find(delimiter);
        while (end != string::npos) {
            parts.push_back(s.substr(start, end - start));
            start = end + delimiter.length();
            end = s.find(delimiter, start);
        }
        parts.push_back(s.substr(start, end));
        return parts;
    }

    // Function to convert a vector of strings to an array<string, 4>
    array<string, 4> convertToOptionsArray(const vector<string>&options) {
        array<string, 4> optionsArray;
        for (size_t i = 0; i < min(options.size(), optionsArray.size()); ++i) {
            optionsArray[i] = options[i];
        }
        // Fill the remaining elements with empty strings
        for (size_t i = options.size(); i < optionsArray.size(); ++i) {
            optionsArray[i] = "";
        }
        return optionsArray;
    }*/
};