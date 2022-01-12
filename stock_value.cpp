//
// Created by Minseok Kim on 2022/01/12.
//

#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i=0;i<prices.size();i++){
        int price=prices[i],cnt=-1;
        for(int j=i;j<prices.size();j++){
            if(prices[j]<price){
                cnt=j-i;
                break;
            }
            cnt++;

        }
        answer.push_back(cnt);
    }
    return answer;
}

int main(){
    vector<int> prices;
    prices.push_back(1);
    prices.push_back(2);
    prices.push_back(3);
    prices.push_back(2);
    prices.push_back(3);

    solution(prices)
}