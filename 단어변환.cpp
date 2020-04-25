#include <string>
#include <vector>
#include <iostream>
using namespace std;
int check[50] = {0};
int answer = 50; // 찾는 최대 맥시멈?
void dfs(int cnt, string begin, string target, vector<string> words){
    for(int i = 0 ; i < words.size() ; i++){
        int same = 0;
        for(int j = 0 ; j < words[i].length() ; j++){
            if(check[i] == 0 && begin[j] != words[i][j])
            {
                same++;
            }
        }
        if(same == 1){ // 다른글자가 하나다
            if(target == words[i] && answer > cnt+1){ // answer보다 작으면.넣어줌
                answer = cnt+1;
                return;
            }
            check[i] = 1;// 찾아봐라가서
            dfs(cnt+1, words[i], target, words);
            check[i] = 0;
        }

    }
}

int solution(string begin, string target, vector<string> words) {
    int k = 0;
    for(int i = 0 ; i < words.size() ; i++){
        if(target == words[i]) k = 1;
    }
    if(k ==0) return 0; // 없는 경우
    dfs(0, begin, target, words);
    if(answer == 50) return 0; // 못찾았다.
    return answer;
}