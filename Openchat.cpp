#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

// ["Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"]
//["Prodo님이 들어왔습니다.", "Ryan님이 들어왔습니다.", "Prodo님이 나갔습니다.", "Prodo님이 들어왔습니다."]

vector<string> Extract(string str){
    vector<string>divided;

    char arr[30];
    strcpy(arr,str.c_str());
    char *ptr = strtok(arr," ");
    while(ptr!=NULL){
        string temp(ptr);
        ptr=strtok(NULL," ");
        divided.push_back(temp);
    }

    return divided;
}

int main(){
    vector<string>answer;
    vector<string> record;
    record.push_back("Enter uid1234 Muzi");
    record.push_back("Enter uid4567 Prodo");
    record.push_back("Leave uid1234");
    record.push_back("Enter uid1234 Prodo");
    record.push_back("Change uid4567 Ryan");

    vector<int> len;
    map<string,string> nickname;


    for(int i=0; i < record.size(); i++) {
        vector<string> temp = Extract(record[i]);
        //string log;
        if(temp.size()==3)
            nickname[temp[1]] = temp[2]; //mapping
            /*if(temp[0]=="Enter") {
                log = temp[1] + "님이 들어왔습니다.";
                len.push_back(temp[1].size());
                answer.push_back(log);
            }
        }
        else{
            log = temp[1] + "님이 나갔습니다.";
            len.push_back(temp[1].size());
            answer.push_back(log);
        }
    */
    }

    for(int i=0;i<record.size();i++){
        vector<string> temp = Extract(record[i]);
       string log;
       if(temp[0]=="Enter")
           log=nickname[temp[1]]+"님이 들어왔습니다.";
       if(temp[0]=="Leave")
           log=nickname[temp[1]]+"님이 나갔습니다.";
       answer.push_back(log);
    }
    /*
    for(int i=0; i < answer.size(); i++){
        string id=answer[i].substr(0, len[i]);
        answer[i].replace(0, len[i], nickname[id]);
    }*/

    for(int i=0; i < answer.size(); i++){
        cout << answer[i] << endl;
    }
}
//문제 푼 것 추가
