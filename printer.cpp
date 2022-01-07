//
// Created by Minseok Kim on 22. 1. 7..
//
#include<vector>
#include<iostream>
using namespace std;

int findmax(vector<int>priorities){
    int idx=0;
    for(int i=1;i<priorities.size();i++){
        if(priorities[i]>priorities[idx])
            idx=i;
    }
    return idx;
}

void modify(vector<int>&vec,vector<int>&check, int n){
    for(int i=0;i<n;i++){
        vec.push_back(vec.front());
        vec.erase(vec.begin());

        check.push_back(check.front());
        check.erase(check.begin());
    }
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int n=priorities.size();
    vector<int>mark(n,0);

    int value=priorities[location];
    mark[location]=1;
    for(int i=0;i<n;i++){
        int max=findmax(priorities);
        modify(priorities,mark,max);

        answer++;

        if(priorities[0]==value && mark[0]==1)
            return answer;
        priorities.erase(priorities.begin());
        mark.erase(mark.begin());

    }
    return answer;
}

int main(){
    vector<int> input;
    input.push_back(1);
    input.push_back(1);
    input.push_back(9);
    input.push_back(1);
    input.push_back(1);
    input.push_back(1);

    /*
    input.push_back(2);
    input.push_back(1);
    input.push_back(3);
    input.push_back(2);*/


}
