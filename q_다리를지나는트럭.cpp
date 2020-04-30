#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue <int> q;
    int sum = 0;
    for(int i = 0 ; i < truck_weights.size() ; i++){
        while(1){
            int w = truck_weights[i];
            if(q.empty()){
                q.push(w);
                sum+=w;
                answer++;
                break;
            }
            else if(bridge_length == q.size()){ // 브릿지 꽉찻다 도착함
                sum -= q.front();
                q.pop();
            }
            else{
                if(w+sum > weight){
                    //무게 넘어서 못싣는다.
                    q.push(0); answer++;
                }
                else{
                    answer++;
                    q.push(w);
                    sum+=w;
                    break;
                }
            }
        }
    }
    return answer+bridge_length;
}