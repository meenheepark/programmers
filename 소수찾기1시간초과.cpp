#include <string>
#include <vector>
#include<math.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    int k = 0;
    for(int i = 2 ; i <= n ; i ++){
        bool k = true;
        for(int j = 2 ; j <= sqrt(i) ; j++){
            if(i%j==0) k = false;
        }
        if(k==true) answer++;
    }
    return answer;
}