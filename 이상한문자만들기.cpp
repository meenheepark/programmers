#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool check = true;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == ' '){
            answer += " "; // 스트링은 더하기 가능
            check = true; // 이래야 다음게 시작부터 대문자만들수 ㅇ
        }
        else{
            if(check == true){
                answer+=toupper(s[i]); // 대문자 변경함수
                check = false;
            }
            else{
                answer+=tolower(s[i]); // 소문자변경함수
                check = true;
            }
        }
        
    }
    return answer;
}