#include <vector>
#include <set>
#include <iostream>
using namespace std;
// 동주 설명 참고 후 재작성

int solution(vector<int> nums)
{
    int answer = 0;
    int n = nums.size();
    set<int> number(nums.begin(), nums.end());
    // 각 폰켓몬의 개수가 중요하지 않기 때문에 -> map 을 쓸 필요가 없음
    // ㄴ set : value 가 필요 없을 때
    // ㄴ map : value 가 필요할 때     => map을 쓸 때는 value가 반드시 필요한지 생각해야해
    // set 생성자의 인자가 set의 자료형과 같은 자료형의 벡터의 begin 이터레이터와 end 이터레이터일 경우, 벡터를 좌라락 set에 넣어 줌.

    if(n/2>=number.size()){
        answer = number.size();
    }
    else answer = n/2;
    return answer;
}

// 10분