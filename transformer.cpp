#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int>result;//결과기록용

int compare(string str1, string str2){
    int n=0;
    for(int i=0;i<str1.size();i++){
        if(str1[i]!=str2[i]) n++;
    }
    //다른 개수 카운팅
    return n;
}

void dfs(string now, string target, vector<string> words,int cnt){
    if(now==target) {
        result.push_back(cnt);
    }
    cnt--; //진행할때마다 1씩 뺀다.

    for(int i=0;i<words.size();i++){
        if(now==words[i]) {
            //현재 단어를 words 리스트에서 지운다. 안그러면 나중에 현재단어로 다시 되돌아 올 수 있으므로
            words.erase(words.begin() + i);
            break;
        }
    }
    vector<string>queue;

    for(int i=0;i<words.size();i++){
        if(compare(words[i],now)==1){
            //하나만 다른 단어를 찾아 큐에 삽입
            queue.push_back(words[i]);
        }
    }

    for(int i=0;i<queue.size();i++){
        dfs(queue[i],target,words,cnt);
    }
}

int solution(string begin, string target, vector<string> words) {
    int answer = 100,i=0; //50개이하이므로 answer는 임의의값 100으로 정함.
    int n=words.size();

    //target이 words안에 있는지 검사
    for(i=0;i<n;i++){
        if(words[i]==target) break;
    }
    //for문이 끝까지 돌았으면 words안에 없으므로 0
    if(i==n) return 0;

    dfs(begin, target, words,n);

    for(int i=0;i<result.size();i++) {
        if(words.size()-result[i]<answer)
            answer=words.size()-result[i];
        //단어를 옮길때마다 1씩 빼고 남은 값이 result니까 원래 words길이에서 result를 뺴면 진행한 크기가 나옴.
    }

    answer=answer;
    return answer;
}

int main(){
    string begin="hit";
    string target="cog";
    vector<string> words;

    words.push_back("hot");
    words.push_back("dot");
    words.push_back("dog");
    words.push_back("lot");
    words.push_back("log");
    words.push_back("cog");

    solution(begin,target,words);
}

