#include<bits/stdc++.h>
using namespace std;

int maximumNonAdjacentSum(int ind,int arr[],int dp[]){
    if(ind==0) return arr[ind];
    if(dp[ind]!=-1) return dp[ind];

    int pick=0;
    if(ind>=2)
        pick=arr[ind]+maximumNonAdjacentSum(ind-2,arr,dp);
    int not_pick=maximumNonAdjacentSum(ind-1,arr,dp);
    int res=max(pick,not_pick);
    return res;
}

int maximumNonAdjacentSum_2(int ind,int arr[],int dp[]){
    dp[0]=arr[0];

    for(int i=1;i<ind;i++){
        int pick=0;
        if(i-2>=0)
            pick=arr[i-2]+arr[i];
        int notPick=arr[i-1]+0;
        dp[i]=max(notPick,pick);
    }
    return dp[ind-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int dp[n];
        memset(dp,-1,sizeof dp);
        for(int i=0;i<n;i++) cin>>arr[i];
        // cout<<maximumNonAdjacentSum(n-1,arr,dp)<<endl;
        cout<<maximumNonAdjacentSum_2(n,arr,dp)<<endl;
    }
}