#include<bits/stdc++.h>

using namespace std;

int firstIndexOfNumber(int i,int n,int arr[],int x){
    if(i==n) return -1;

    if(arr[i]==x) return i;

    return firstIndexOfNumber(i+1,n,arr,x);
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int x; cin>>x;

    cout<<firstIndexOfNumber(0,n,arr,x)<<endl;
}