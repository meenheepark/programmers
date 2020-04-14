#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector <int> v;
    while(n != 0){
        int k = n%10;
        n = n/10;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    
    int num = 1;
    for(int i = 0 ; i < v.size(); i++){
        
        answer+=num*v[i];
        num *=10;
    }
    return answer;
}