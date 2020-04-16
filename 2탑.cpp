#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    for(int i = 1 ; i < heights.size() ; i++){
        if((i-1) == 0) answer.push_back(0);
        int k =1;
        for(int j = i-1; j >= 0 ; j--){
            if(heights[j]>heights[i]) {
                answer.push_back(j+1);
                k = 0;
                break;
            }
        }
        if(k == 1)answer.push_back(0);
    }
    return answer;
}