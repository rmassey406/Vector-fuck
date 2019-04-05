//
// Created by rmass on 4/3/2019.
//
#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include "Functions.h"
#include "wordCount.h"

using namespace std;
void uppercaseLetters(vector<string> &words){
    for(int i = 0; i < words.size(); i++) {
        string currentString = words.at(i);
        for (int j = 0; j < currentString.size(); j++)
            currentString.at(j) = toupper(currentString.at(j));
        words.at(i) = currentString;
    }
}

void alphabetize(vector<string>& words) {
    bool swapp = true;
    while (swapp) {
        swapp = false;
        for (size_t i = 0; i < words.size() - 1; i++) {
            if (words[i] > words[i + 1]) {
                string temp;
                temp = words[i];
                words[i] = words[i + 1];
                words[i + 1] = temp;
                swapp = true;
            }
        }
    }
}
/*void wordCount(vector<string> &list, vector<WordCount> wordsList){
    for(int i = 0; i < list.size(); i++){

    }
}
 */