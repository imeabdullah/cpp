#include<bits/stdc++.h>

using namespace std;

long long frogJump(int n,int arr[],int dp[]){
    if(n==0) return 0;

    if(dp[n]!=-1) return dp[n];

    long long step1=frogJump(n-1,arr,dp)+abs(arr[n]-arr[n-1]);
    long long step2=INT_MAX;
    if(n>1)
        step2=frogJump(n-2,arr,dp)+abs(arr[n]-arr[n-2]);
    dp[n]=min(step1,step2);
    return dp[n];
}

int frogJump(int n,int arr[]){
    vector<int> dp(n,-1);

    dp[0]=0;

    for(int i=1;i<n;i++){
        int step_1=dp[i-1]+abs(arr[i]-arr[i-1]);
        int step_2=INT_MAX;
        if(i>1)
            step_2=dp[i-2]+abs(arr[i]-arr[i-2]);
        dp[i]=min(step_1,step_2);
    }
    return dp[n-1];
}

int main(){

}