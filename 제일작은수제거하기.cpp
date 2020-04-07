#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 99999999;
    int minidx = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(min > arr[i]){
            min = arr[i];
            minidx = i;
        }
    }
    for(int i = 0 ; i < arr.size() ; i++){
        if(i == minidx){
            continue;
        }
        answer.push_back(arr[i]);
    }
    if(arr.size() == 0 || (arr.size()==1&& arr[0] == 10)){
        answer.push_back(-1);
        return answer;
    }
    else return answer;
}