#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    
    for(int i=0;i<scoville.size();i++){
        q.push(scoville.at(i));
    }
    while(1){
        if(q.size()==0) {answer =-1; break;}
        if(q.size()==1) {if(q.top()<K) answer =-1; break;}
        int a = q.top();
        q.pop();
        if(a>=K)break;
        int b = q.top();
        q.pop();
        q.push(a+2*b);
        answer++;
    }
    return answer;
}