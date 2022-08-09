#include<bits/stdc++.h>

using namespace std;
int numcodes(int arr[],int n){
    if(n==1 or n==0) return 1;
    int firstO=numcodes(arr,n-1);
    int second=0;
    if((arr[n-2]*10+arr[n-1]) <= 26)
        second=numcodes(arr,n-2);
    return firstO+second;
}

int numCodes(int arr[],int n){
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if((arr[i-2]*10+arr[i-1])<=26)
            dp[i]+=dp[i-2];
    }
    return dp[n];
}
int main(){

}