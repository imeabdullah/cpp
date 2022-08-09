#include<bits/stdc++.h>

using namespace std;
void SubsetSumI(int i,int n,int sum,int arr[],vector<int> &ds);

void SubsetSumII(int i,int n,int sum,int arr[],vector<int> &ds);

int main()
{
    // int arr[]={1,2,3};
    // vector<int> ds;

    // SubsetSumI(0,3,0,arr,ds);
    // sort(ds.begin(),ds.end());

    // for(auto it:ds)
    //     cout<<it<<" ";
    // cout<<endl;
}

void SubsetSumI(int i,int n,int sum,int arr[],vector<int> &ds)
{
    if(i==n)
    {
        ds.push_back(sum);
        return;
    }

    // pick in set
    SubsetSumI(i+1,n,sum+arr[i],arr,ds);

    // without not picking in set
    SubsetSumI(i+1,n,sum,arr,ds);
}
