//
// Created by Minseok Kim on 22. 1. 3..
//

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int> answer;
    int brown=8,yellow=1;
    int sum=brown+yellow;

    for(int i=3;i<=sqrt(sum);i++){
        if(sum%i==0) {
            cout << i << endl;
            int horizon=sum/i;
            int edge=(horizon+i)*2-4;

            if(brown==edge && yellow==sum-edge) {
                answer.push_back(i);
                answer.push_back(horizon);
                break;
            }
        }
    }

    cout<<answer[0]<<" , "<<answer[1]<<endl;
}
//문제 푼 소감 추가
