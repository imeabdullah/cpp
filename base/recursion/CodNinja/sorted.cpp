#include<iostream>
using namespace std;

bool is_sorted(int arr[],int n)
{
    if(n==0 or n==1) return true;

    if(arr[0]>arr[1]) return false;

    return is_sorted(arr+1,n-1);
}

int main()
{
    int arr[]={1,2,3};
    if(is_sorted(arr,3)) cout<<"Sorted";
    else cout<<"Not Sorted";
}