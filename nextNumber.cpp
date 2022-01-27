/*
int countOne(int n){
    int ret=0;
    // n의 이진수에서 1의 개수 세기
    for(int i=0 ; i < 31 ; i++){
        if(n & 0x01<<i)
            ret++;
    }
    return ret;
}
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;
string binary(int n){
    string binary="";
    while(n>0){
        binary=to_string(n%2)+binary;
        n/=2;
    }
    return binary;
}

int countOne(string str){
    int num=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1')
            num++;
    }
    
    return num;
}

int solution(int n) {
    int answer = 0;
    string binary_n=binary(n);
    
    int temp=n;
    while(temp<10065){
        temp++;
        string binary_temp=binary(temp);
        if(countOne(binary_n)==countOne(binary_temp)){
            return temp;
        }
    }
}
