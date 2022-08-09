#include<bits/stdc++.h>

using namespace std;

int climbingStair(int n){
    if(n<=1) return 1;

    return climbingStair(n-1)+climbingStair(n-2);
}

int climbingStair_2(int n,int dp[]){
    if (n <= 1)
        return dp[n] = 1;
 
    if (dp[n] != -1) {
        return dp[n];
    }
    dp[n] = climbingStair_2(n - 1, dp) + climbingStair_2    (n - 2, dp);
    return dp[n];
}
int main(){
    cout<<climbingStair(3)<<endl;

    int n;
    cin>>n;

    int dp[n+1];
    memset(dp,-1,sizeof dp);

    cout<<climbingStair_2(n,dp)<<endl;
}