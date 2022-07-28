#include<bits/stdc++.h>
using namespace std;
// O(n^3) solution
int maxSum1(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            if(sum>max) max=sum;
        }
    }
    return max;
}

// O(n^2) solution
int maxSum2(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        sum+=arr[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum>max)
                max=sum;
        }
    }
    return max;
}

// O(n) solution
int kadaneAlgo(int arr[],int n)
{
    int curr_max=0;
    int best_max=0;

    for(int i=0;i<n;i++)
    {
        curr_max+=arr[i];
        if(curr_max > best_max) best_max=curr_max;
        if(curr_max < 0) curr_max=0;
    }
    return best_max;
}
int main()
{
    int arr[]={1,2,-3,4,-10};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<maxSum1(arr,n)<<endl;
    //cout<<maxSum2(arr,n)<<endl;
    cout<<kadaneAlgo(arr,n)<<endl;
}