//
// Created by Minseok Kim on 22. 1. 5..
//

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
bool isPrime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0) count++;
    }

    if(count==2) return true;
    else return false;
}

vector<string> choose(string str, int n){
    vector<string>result;
    string temp="";
    int i=0;
    for(i=0;i<n;i++)
        temp+="1";
    for(i;i<str.size();i++)
        temp+="0";
    do{
        string s="";
          for(int j=0;j<str.size();j++){
              if(temp[j]=='1'){
                  s+=str[j];
              }
          }
        result.push_back(s);
        }while(prev_permutation(temp.begin(),temp.end()));
    return result;
}

int main(){
    vector<int>compare;
    int answer=0;
    string numbers="011";
    sort(numbers.begin(), numbers.end());
    vector<string>temp;
    for(int i=1; i < numbers.length(); i++){
        vector<string>temp=choose(numbers, i);
        for(int j=0;j<temp.size();j++){
            compare.push_back(stoi(temp[j]));
        }
    }

    do{
        compare.push_back(stoi(numbers));
    }while(next_permutation(numbers.begin(), numbers.end()));

    sort(compare.begin(),compare.end());
    vector<int>::iterator uit = unique(compare.begin(),compare.end());
    compare.erase(uit,compare.end());

    for(int i=0;i<compare.size();i++){
        if(isPrime(compare[i]))
            answer++;
    }
}