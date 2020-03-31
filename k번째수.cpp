#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0 ; i < commands.size() ; i++){
        int a = commands[i][0];
        int b = commands[i][1];
        int c = commands[i][2];
        vector<int> v;
        for(int j = a ; j <= b; j++){
            v.push_back(array[j-1]);
            //cout << v << endl;
        }
        sort(v.begin(), v.end());
        int k = v[c-1];
        answer.push_back(k);
    }
    return answer;
}
