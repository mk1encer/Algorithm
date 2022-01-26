#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int remove=k,size=number.size()-k;
    while(remove>0 && answer.size()<size){
        int temp=0;
        for(int i=0;i<remove+1;i++){
            if(number[temp]<number[i])
                temp=i;
        }
        answer+=number[temp];
        number=number.substr(temp+1);
        remove-=temp;
    }
    if(answer.size()<size)
        answer+=number;
    return answer;
}

int main(){
    string number="987654321";
    cout<<solution(number,4)<<endl;
}
