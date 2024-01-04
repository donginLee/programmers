#include <string>
#include <vector>
using namespace std;

int howmanyleft(int a, int b){
    int left = 100-a;
    if(left%b ==0){
        return left/b;
    }
    else {
        return left/b +1;
    }
}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int temp=-1;
    int day =1;
    for(int i=0;i<progresses.size();i++){
        int cur = progresses.at(i);
        int sp = speeds.at(i);
        int left = howmanyleft(cur,sp);
        if(left <= temp) day ++;
        else if(left>temp) {
            if(temp != -1) answer.push_back(day);
            day =1;
            temp = left;
        }   
    }
    answer.push_back(day);
    return answer;
}