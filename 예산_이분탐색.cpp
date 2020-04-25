#include <vector>
#include <algorithm>
using namespace std;
 
int solution(vector<int> budgets, int M) {
    //정답, 최대값, 최솟값, 평균
    int answer = 0, max = 100000, min = 1, avg;
    while (min <= max) {
        //상한액을 정할필요가 없는지 체크용
        bool check = true;
        long long sum = 0;
        avg = (max + min) / 2;
        //순회를 하면서 상한액보다 크다면 평균값으로 바꾸고 저장
        for (int i = 0 ; i <budgets.size();i++) {
            if (budgets[i] > avg) { // 최대를 평균값으로 생각하고 sum 계산
                sum += avg;
                check = false;
            }
            else    sum += budgets[i] ;
        }
        //총합이 최대 예산을 넘었다면 최대값을 수정하고 다시 반복
        if (sum > M)    max = avg - 1;
        //총합이 최대 예산이 보다 적을때
        else {
            //상한액에 한번도 걸리지않았다면 원소중 최댓값 리턴
            if (check){
                return *max_element(budgets.begin(), budgets.end());
            } //그게아니라면 최솟값 바꾸고 다시계산
            min = avg + 1;
            answer = avg;
        }
    }
    return answer;
}