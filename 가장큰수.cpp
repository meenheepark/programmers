#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(string a, string b) {
    return a + b > b + a; // 더 큰것으로 리턴하여 정렬
}
string solution(vector<int> numbers) {
   string answer = "";
    vector<string> temp;
    for (auto num : numbers)
        temp.push_back(to_string(num)); // string으로 바꾸기...간단
    sort(temp.begin(), temp.end(), cmp);
    if (temp.at(0) == "0")        return "0"; // 0이 여러개이면 한개만 리턴
    for (auto num : temp)
        answer += num; // 스트링은 그냥 더하면 붙여짐
    return answer;
}