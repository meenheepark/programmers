#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;
int a[5] = {1,2,3,4,5};
int b[8] = {2,1,2,3,2,4,2,5}; //홀수번째문제는 2
int c[10] = {3,3,1,1,2,2,4,4,5,5}; //두번씩 반복
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    for(int i = 0 ; i < answers.size(); i++){
        if(answers[i] == b[i%8])num2+=1;
        if(answers[i] == a[i%5]) num1+=1;
        if(answers[i] == c[i%10]) num3+=1;
    }
    cout << num1 << num2<<num3;
    int max1 = max(max(num1,num2), num3);
    if(max1 == num1) answer.push_back(1);
    if(max1 == num2) answer.push_back(2);
    if(max1 == num3) answer.push_back(3);
    return answer;
}