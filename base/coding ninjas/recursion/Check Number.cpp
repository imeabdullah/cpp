#include<bits/stdc++.h>

using namespace std;

bool checkNumber(int n,int arr[],int x)
{
    if(n==0) return false;

    if(arr[n-1]==x) return true;

    return checkNumber(n-1,arr,x);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    int x;
    cin>>x;
    cout<<checkNumber(n,arr,x)<<endl;
}