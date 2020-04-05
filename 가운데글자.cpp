#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    cout << s.size() << endl;
    int k = s.size();
    int r = k/2;
    cout << k;
    if(k%2 == 0){
        answer.push_back(s[r-1]);
        answer.push_back(s[r]);
    }
    else{
        answer.push_back(s[r]);
    }
    return answer;
}