#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(),completion.end());
    
    int num = 0;
    
    for(int i = 0 ; i < participant.size(); i++) {
        if(participant[i] != completion[i]) {
            return participant[i];
        }
    }
}