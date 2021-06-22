// Created by Minseok Kim on 21. 6. 22
// 메모이제이션 사용.

#include<iostream>
#include<vector>
using namespace std;

int dp[41]={0,1,1,};
int main(){
    for(int i=3;i<41;i++)
        dp[i]=dp[i-1]+dp[i-2];

    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.emplace_back(temp);
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0) cout<<1<<" "<<0<<endl;
        else if(arr[i]==1) cout<<0<<" "<<1<<endl;
        else cout<<dp[arr[i]-1]<<" "<<dp[arr[i]]<<endl;
    }
}