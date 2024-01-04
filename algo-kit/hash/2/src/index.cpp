#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int n = nums.size();
    map <int,int> number;
    
    for(int i=0;i<nums.size();i++){
        int count= nums.at(i);
        number[count]++;
    }
    answer = min(n/2,(int)number.size());
    // min / max는 algorithm 헤더 include
    // size는 int가 아니라 unsigned_long임
    // 형변환은 앞에 (자료형) 붙여주기 ex) (int) a;
    return answer;
}

// 10분