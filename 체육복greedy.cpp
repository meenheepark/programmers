#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector <int> stu(n,1);
    for(auto k : lost){
        stu[k-1]--; // 0부터 있으므로
    }
    for(auto k : reserve){
        stu[k-1]++;
    }
    for(int i = 0 ; i < stu.size(); i++){
        if(i!=0&&stu[i] == 0){
            if(stu[i-1] ==2){ // 하나 작은애한테 빌릴때
                stu[i]++;
                stu[i-1]--;
                continue;
            }
        }
        if(i!=stu.size()-1&&stu[i] == 0){ // 큰애한테 받기
            if(stu[i+1]==2){
                stu[i]++;
                stu[i+1]--;
            }
        }
    }
    for(int i = 0 ; i < stu.size() ; i++){
        if(stu[i]>0) answer++;
    }
    return answer;
}