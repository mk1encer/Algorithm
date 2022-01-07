//
// Created by Minseok Kim on 2022/01/07.
//
#include<map>
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map <string, int>hash;

    for(auto pair:clothes){
        hash[pair[1]]++;
    }

    for(auto iter=hash.begin();iter!=hash.end();iter++){
        answer*=iter->second+1;
    }
    return answer-1;
}
int main(){
    vector<vector<string>> clothes;
    vector<string>str;
    str.push_back("yellowhat");
    str.push_back("headgear");
    clothes.push_back(str);
    str.clear();

    str.push_back("bluesunglasses");
    str.push_back("eyewear");
    clothes.push_back(str);
    str.clear();

    str.push_back("green_turban");
    str.push_back("headgear");
    clothes.push_back(str);

    solution(clothes);
}

