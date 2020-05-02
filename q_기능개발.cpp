#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> q;
    for(int i = 0 ; i < progresses.size(); i++){
        int k = 100 - progresses[i];
        if(k%speeds[i] != 0){
          k = k / speeds[i];
          k++;
        }
        else{k = k / speeds[i];}
        q.push_back(k);
        //cout << k << endl;
    }
 	int s = q[0];
	int cnt = 0;
	for (int i = 0; i < q.size(); i++) {
		if (s < q[i]) { // 찾다가 자기보다 큰거 있으면 그만.
			answer.push_back(cnt);
			cnt = 1;
			s = q[i];
		}
		else { //자기보다 작으면 cnt올림.
			cnt++;
		}
		if (i == q.size() - 1) {
			answer.push_back(cnt);
		}

	}

    return answer;
}