#include <string>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    for(int i = 0 ; i < seoul.size(); i++){
        if(seoul[i] == "Kim") answer += to_string(i); 
    }
    answer += "에 있다"; 
    cout << answer;
    return answer;
}