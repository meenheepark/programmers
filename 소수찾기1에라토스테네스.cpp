#include <string>
#include <vector>
using namespace std;
int k[1000000] ;
int solution(int n) {

    int answer = 0;
 
    for(int i = 2; i <= n; i++) {
        if(k[i] == 1) continue;
        for(int j = i*2; j <= n; j+=i) {
            
            k[j] = 1;
            
        }
    }
    
    for(int i = 2; i <= n; i++) {
        if(k[i] == 0) answer++;
    }
    
    return answer;
}