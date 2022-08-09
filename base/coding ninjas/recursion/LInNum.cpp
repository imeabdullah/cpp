#include<bits/stdc++.h>

using namespace std;

int lastIndexOfNumber(int i,int f,int arr[],int x,int n){
    if(i==n){
        return f;
    }

    if(arr[i]==x) f=i;

    return lastIndexOfNumber(i+1,f,arr,x,n);
}


int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int x; cin>>x;

    cout<<lastIndexOfNumber(0,-1,arr,x,n)<<endl;
}