#include <string>
#include <vector>
#include <iostream>
using namespace std;

int a[31] = {0}; // 종류별 옷의 갯수
int check[31] = {0};
int solution(vector<vector<string>> clothes) {
    int answer = 1;

    for(int i = 0 ; i < clothes.size() ; i++){
        if(check[i] == 1) continue;
        for(int j = i ; j < clothes.size() ; j++){ // i부터 해야 자기 자신이 들어감.
            if(clothes[i][1] == clothes[j][1]){
                a[i]++; // i라는 것의 종류의 갯수 1증가
                check[j] = 1; // 이 옷은 확인 했다.
            }
        }
    }
    for(int i = 0 ; i < 31 ;i++){
        if(a[i]> 0){
            answer *= (a[i]+1);
                   cout << a[i];
        }
    }
    answer-=1;
    return answer;
}