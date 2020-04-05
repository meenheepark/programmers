#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int nump = 0;
    int numy = 0;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'p') nump++;
        if(s[i] == 'P') nump++;
        if(s[i] == 'y') numy++;
        if(s[i] == 'Y') numy++;
    }
    if(nump == numy) answer = true;
    else answer = false;
    cout << nump << endl;

    return answer;
}