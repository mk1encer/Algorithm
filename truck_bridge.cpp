#include <string>
#include <vector>

using namespace std;
int rest(vector<int>proceed,int capac){
    for(int i=0;i<proceed.size();i++){
        capac-=proceed[i];
        if(capac<0) return 0;
    }
    return capac;
}


int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    vector<int>proceed, passed,temp;
    int i=0;
    while(passed.size()<truck_weights.size()){
        time++;
        if(rest(proceed,weight)>truck_weights[i]){
            proceed.push_back(truck_weights[i]);
            temp.push_back(bridge_length);
        }
        for(int i=0;i<temp.size();i++){
            --temp[i];
            if(temp[i]==0){
                passed.push_back(proceed[i]);
                proceed.erase(proceed.begin());
                temp.erase(temp.begin());
            }
        }
        i++;
    }
    return time;
}

int main(){
    int bridge_length=100;
    int weight=100;
    vector<int> truck_weights;

    truck_weights.push_back(10);
    solution(bridge_length,weight,truck_weights);
}
