#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<char> ans;
    int a[50] = {0};
    sort(strings.begin(), strings.end());
    for(int i = 0 ; i < strings.size() ; i ++){
        ans.push_back(strings[i][n]);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0 ; i < strings.size() ; i ++){
        for(int j = 0 ; j < strings.size() ; j ++){
            if(a[j] == 0 && ans[i] == strings[j][n]){
                answer.push_back(strings[j]);
                a[j] =1;
            }
        }
    }
    return answer;
}