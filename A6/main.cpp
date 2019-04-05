#include <iostream>
#include <string>
#include <vector>
#include "Functions.h"
#include "wordCount.h"
using namespace std;
int main() {
    vector<string> sentences;
    vector<string> words;
    vector<WordCount> wordCount;
    string singleSentence;
    bool loopString = false;
    cout << "Enter as many sentences as you like and enter \"I'm done!\" when completed:";
    while(loopString != true){
        getline(cin, singleSentence);

        if(singleSentence == "I'm done!"){
            loopString = true;
            break;
        }
        for(int i = 0; i < singleSentence.size(); i++){
            if(singleSentence[i] == '.'){
                singleSentence.erase(i--,1);
            }if(singleSentence[i] == '!'){
                singleSentence.erase(i--,1);
            }if(singleSentence[i] == '?'){
                singleSentence.erase(i--,1);
            }
        }
        sentences.push_back(singleSentence);
    }
    for(int i = 0; i < sentences.size(); i++){ //this block takes the vector of sentences and puts it into words with help from https://stackoverflow.com/questions/49353648/trying-to-split-a-sentence-into-vector-of-words-in-c
        for(int j = 0; j < sentences[i].size(); j++){
            int previous = 0;
            if (sentences[i][j] == ' '){
                words.push_back(sentences[i].substr(previous, j));
                previous = j + 1;
            }
        }
    }
    uppercaseLetters(words);
    alphabetize(words);
    cout << words[0];
    return 0;
}