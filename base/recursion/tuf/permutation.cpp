/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include"bits/stdc++.h"

using namespace std;

void PermutationI(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans, bool freq[]);
void PermutationII(int ind,vector<int> &arr,vector<vector<int>> &ans);

int main()
{
    bool freq[2]={0};
    vector<int> ds;
    vector<vector<int>> ans;
    vector<int> arr={1,2};
    
    PermutationI(arr,ds,ans,freq);
    
   cout<<"[\n"; 
    for(auto sol:ans)
    {
        for(auto it:sol)
        {
            cout<<" "<<it<<" ";
        }
        cout<<endl;
    }
    cout<<"]\n"; 
    return 0;
}

void PermutationI(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans, bool freq[])
{
    if(arr.size()==ds.size())
    {
        ans.push_back(ds);
        return;
    }
    
    for(int i=0;i<arr.size();i++)
    {
        if(!freq[i])
        {
            ds.push_back(arr[i]);
            freq[i]=1;
            
            // lets go for recursion
            PermutationI(arr,ds,ans,freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
}

void PermutationII(int ind,vector<int> &arr,vector<vector<int>> &ans)
{
    if(arr.size()==ind)
    {
        ans.push_back(arr);
        return;
    }
    
    for(int i=ind;i<arr.size();i++)
    {
        swap(arr[ind],arr[i]);
        PermutationII(ind+1,arr,ans);
        swap(arr[ind],arr[i]);
    }
}
