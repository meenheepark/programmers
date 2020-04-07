#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;
    long long num1 = num; // 연산 도중에 int의 범위를 넘어갈수 있어서 롱롱선언
    //cout << num1 << endl;
    while(num1!=1){
        if(answer >= 500 ) return -1;
        if(num1 == 1) return answer;
        if(num1 % 2 == 0){ num1 = num1/2;} // 짝수라면
        else{ num1 = num1*3 +1;}
        answer++;
    }
}