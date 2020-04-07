#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    sort(s.begin(), s.end(), greater<char>()); // 1이 2보다 크면 트루 == 내림차순
    return s;
}