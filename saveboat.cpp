#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end(),compare);
    int last=people.size()-1;
    for(int i=0;i<=last;i++){
        if(people[i]+people[last]<=limit){
            last--;
        }
        answer++;
    }
    return answer;
}
