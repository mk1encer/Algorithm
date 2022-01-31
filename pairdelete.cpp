#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int answer=0;
    // while(s.size()>0){
    //     int temp=s.size();
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]==s[i+1]){
    //             s.erase(i,2);
    //         }
    //     }
    //     if(temp==s.size())
    //         break;
    // }
    // if(s.size()==0)
    //     answer=1;

    string temp="";
    
    for(int i=0;i<s.size();i++){
        if(temp.back()==s[i])
            temp.erase(temp.size()-1);
        else{
            temp+=s[i];
        }
    }
    
    if(temp.size()==0) 
        answer=1;
    return answer;
}
