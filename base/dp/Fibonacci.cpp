#include<bits/stdc++.h>

using namespace std;

// memoization method
int fib(int n,vector<int> &dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];

    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}

// tabulation method
int fibo(int n){
    vector<int> dp(n+1);

    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fib(n,dp)<<endl;
    cout<<fibo(n)<<endl;
}