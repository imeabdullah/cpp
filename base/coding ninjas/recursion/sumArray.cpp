#include<iostream>

using namespace std;

long long sumArray(int arr[],int n,int i=0,int sum=0)
{
    if(i==n) return sum;
    return sumArray(arr,n,i+1,sum+=arr[i]);
}
int main()
{
    int arr[5]={1,2,3,4};
    cout<<sumArray(arr,4);
}