#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;
string reverse(string str){
    string temp="";
    for(int i=0;i<str.length();i++)
        temp=str[i]+temp;
    return temp;
}

int solution(int n) {
    int answer = 0;
    string temp="";
    if(n>=3){
        do{
            temp+=to_string(n%3);
            n/=3;
        }while(n/3!=0);
    }
    temp+=to_string(n%3); //3진법 뒤집은수 구함.
    
    temp=reverse(temp);
    cout<<temp<<endl;
    
    for(int i=0;i<temp.size();i++){
        answer+=pow(3,i)*(temp[i]-'0');
        cout<<answer<<endl;
    }
    
    return answer;
}
