#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    char start;
    for(int i = 0 ; i <s.size(); i++){
        if(s[i] >= 'a' && s[i]<='z'){
            start = 'a';
        }
        else if(s[i] >= 'A' && s[i]<='Z'){
            start = 'A';
        }
        if(s[i] != ' '){
            s[i] = (s[i]+n-start)%26+start;
        }
        //answer.push_back(s[i]);
    }
    return s;
}