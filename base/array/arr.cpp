#include<bits/stdc++.h>

using namespace std;

int main()
{
    // 1D Dynamic Array
    int *arr=new int[5];

    for(int i=1;i<=5;i++)
        arr[i-1]=i;
    
    for(int i=1;i<=5;i++)
        cout<<arr[i-1]<<" ";
    cout<<endl;
    
    delete[] arr;
    arr=nullptr;

    // updating array size
    arr=new int[120];
    //

    for(int i=1;i<=120;i++)
        arr[i-1]=i;
    
    for(int i=1;i<=120;i++)
        cout<<arr[i-1]<<" ";
    
    delete[] arr;
    arr=0;
}