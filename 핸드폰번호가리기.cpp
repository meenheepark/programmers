#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int k = phone_number.size() ;
    for(int i = 0 ; i< k-4 ; i++){
        answer.push_back('*');
    }
    for(int i = k-4 ; i< k ; i++){
        answer.push_back(phone_number[i]);
    }
    return answer;
}