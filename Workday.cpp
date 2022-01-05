//
//
// Created by Minseok Kim on 22. 1. 5..
//

#include<iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer,temp;
    int programs=progresses.size();
    for(int i=0;i<programs;i++){
        int leftday=100-progresses[i];
        int days=leftday/speeds[i];
        if(leftday%speeds[i]==0)
            temp.push_back(days);
        else
            temp.push_back(days+1);
    }

    int counts=1;
    int idx=0;
    for(int i=1;i<programs;i++){
        if(temp[i]>temp[idx]){
            answer.push_back(counts);
            counts=1;
            idx=i;
        }
        else{
            counts++;
        }
    }
    answer.push_back(counts);
    return answer;
}

int main(){
    vector<int>progresses,workdays;
    progresses.push_back(93);
    progresses.push_back(93);
    progresses.push_back(30);
    progresses.push_back(55);
    progresses.push_back(55);
    progresses.push_back(55);


    workdays.push_back(1);
    workdays.push_back(1);
    workdays.push_back(30);
    workdays.push_back(5);
    workdays.push_back(3);
    workdays.push_back(5);

    solution(progresses,workdays);
}