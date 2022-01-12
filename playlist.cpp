#include<iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int>hash;

    int n=plays.size();
    for(int i=0;i<n;i++){
        hash[genres[i]]+=plays[i];
    }

    vector<string>lists;
    while(!hash.empty()) {
        pair<string, int>temp;
        temp.first="", temp.second=0;

        for (auto pair: hash) {
            if(pair.second>temp.second)
                temp=pair;
        }
        lists.push_back(temp.first);
        hash.erase(temp.first);
    }

    for(int i=0;i<lists.size();i++){
        int max=-1,semi=-1;
        for(int j=0;j<n;j++){
            if(lists[i]==genres[j]){
                if(plays[j]>plays[max]&&plays[j]>plays[semi]) {
                    semi=max;
                    max = j;
                }
                else if(plays[j]<=plays[max]&&plays[j]>plays[semi])
                    semi=j;
            }
        }
        answer.push_back(max);
        if(plays[semi]>0)
            answer.push_back(semi);
    }

    return answer;
}

int main(){
    vector<string>genres;
    vector<int>plays;

    genres.push_back("classic");
    genres.push_back("pop");
    genres.push_back("classic");
    genres.push_back("classic");
    genres.push_back("pop");

    plays.push_back(500);
    plays.push_back(600);
    plays.push_back(150);
    plays.push_back(500);
    plays.push_back(2500);

    solution(genres,plays);
}