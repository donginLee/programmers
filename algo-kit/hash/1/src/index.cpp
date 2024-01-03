#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map <string,int> table;
    
    for(int i=0;i<participant.size();i++){
        string name = participant.at(i);
        cout<<table[name]<<" "<<table[name]<<"\n";
        if(!table[name]) table[name]=1;
        else table[name]++;
    }
    for(int i=0;i<completion.size();i++){
        string name = completion.at(i);
        table[name]--;
    }
    for(map<string,int>::iterator iter = table.begin();iter!=table.end();iter++){
        if(iter->second == 1){answer = iter->first; break;}
    }
    return answer;

}
// 10분