#include<bits/stdc++.h>

using namespace std;
int coin_change(int n,int coins[],int s) {
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(s == 0 ) return 0;

    int first = coin_change(n-coins[0],coins, s);
    int second = coin_change(n,coins+1, s-1);
    return first+second;
}
int main(){
    int arr[]={1,2};
    cout<<coin_change(4,arr,2)<<endl;
}