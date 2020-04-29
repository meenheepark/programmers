#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
     priority_queue<int> pq;
     queue<pair<int,int>> q;
    for(int k = 0 ; k < priorities.size() ; k++){
        q.push(make_pair(k, priorities[k]));
        pq.push(priorities[k]);
    }
    
    while(!q.empty()){
        int i = q.front().first;
        int p = q.front().second;
        q.pop();
        if(p == pq.top()){
            //프린트
            pq.pop();
            answer++;
            if(i == location){
                break;
            }
        }
        else{
            q.push(make_pair(i, p));
        }
    }
    
    return answer;
}