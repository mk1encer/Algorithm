#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    
    while(s!="1"){
        answer[0]++;
        int ones=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') ones++;
            else if(s[i]=='0'){ 
                s.erase(i,1);
                i--;
                answer[1]++;
            }
        } //0제거, 1개수
        cout<<s<<endl;
    
        string temp="";
        while(ones!=0){
            temp=to_string(ones%2)+temp;
            ones/=2;
        } //2진수 변환      
        s=temp;     
    }
    
    return answer;
}
