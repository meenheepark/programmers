#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int k,j;
    if(a > b){ k = b; j = a;}
    else{ k =a; j = b;}
    for(int i = k ; i <= j;i++){
        answer+=i;
    }
    if(a == b) answer = a;
    return answer;
}