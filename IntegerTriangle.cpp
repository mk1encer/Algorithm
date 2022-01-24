#include <string>
#include <vector>
#include <iostream>

using namespace std;
int max(int x,int y){
    if(x>y) return x;
    else return y;
}

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int n=triangle.size();
    int temp[500][501];
    temp[0][0]=triangle[0][0];
    
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                temp[i][j]=temp[i-1][j]+triangle[i][j];
            }
            else if(j==i){
                temp[i][j]=temp[i-1][j-1]+triangle[i][j];
            }
            else{
                temp[i][j]=max(temp[i-1][j-1],temp[i-1][j])+triangle[i][j];
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(answer<temp[n-1][i])
            answer=temp[n-1][i];
    }
    
    return answer;
}
