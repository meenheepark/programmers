#include <string>
#include <vector>
#include <cmath> // 필요한 헤더
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n); // 제곱근 구해주는 함수
    //cout << answer;
    if(answer*answer == n) return pow(answer+1, 2); // 제곱해주는함수
    else return -1;
    return answer;
}