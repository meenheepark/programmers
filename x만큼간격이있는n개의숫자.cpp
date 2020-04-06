#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int num = 0;
    for(int i = 0 ; i < n ; i++){
        num +=x;
        answer.push_back(num);
    }
    return answer;
}