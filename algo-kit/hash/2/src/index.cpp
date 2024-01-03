#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int n = nums.size();
    map <int,int> number;
    
    for(int i=0;i<nums.size();i++){
        int count= nums.at(i);
        if(!number[count])number[count]=1;
        else number[count]++;
    }
    if(n/2>=number.size()){
        answer = number.size();
    }
    else answer = n/2;
    return answer;
}

// 10분