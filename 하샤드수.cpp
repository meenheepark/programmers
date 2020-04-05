#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int k = x;
    int num =0;
    while(x !=0){
        num+= x%10;
        x = x/10;
    }
    if(k%num ==0) answer = true;
    else answer = false;
    return answer;
}