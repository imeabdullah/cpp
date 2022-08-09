#include<bits/stdc++.h>

using namespace std;

void allIndexesOfNumber(int i,int n,int arr[],int x){
    if(n==0){
        return;
    }

    if(arr[0]==x) cout<<i<<" ";

    allIndexesOfNumber(i+1,n-1,arr+1,x);
}
int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int x; 
    cin>>x;

    allIndexesOfNumber(0,n,arr,x);
}