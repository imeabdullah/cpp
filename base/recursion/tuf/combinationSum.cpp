/******************************************************************************

                              Abdullah

*******************************************************************************/

#include"bits/stdc++.h"

using namespace std;

void comSumI(int i,int n,int t,int arr[],vector<int> &ds,vector<vector<int>> &ans);


int main()
{
    int arr[]={2,3,6,7};
    int n=4;
    
    vector<int> ds;
    vector<vector<int>> ans;
    
    comSumI(0,n,7,arr,ds,ans);
    
    for(auto it:ans)
    {
        for(auto s:it)
            cout<<s<<" ";
        cout<<endl;
    }
    
    return 0;
}

void comSumI(int i,int n,int t,int arr[],vector<int> &ds,vector<vector<int>> &ans)
{
    if(i==n)
    {
        if(t==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    
    if(t==0)
    {
        ans.push_back(ds);
        return;
    }
    
    //... pick if lesser than arry[i]
    if(arr[i]<=t)
    {
        ds.push_back(arr[i]);
        comSumI(i,n,t-arr[i],arr,ds,ans);
        ds.pop_back();
    }
    
    //...not pick
    comSumI(i+1,n,t,arr,ds,ans);
}
