#include <bits/stdc++.h>

using namespace std;

// for the first time...just print out
bool subSum(int i,int n,int s,int arr[],vector<int> &ds)
{
    if(i==n)
    {
        if(s==0){
            for(auto it:ds)
                cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else
            return false;
    }
    
    if(s==0){
        for(auto it:ds)
            cout<<it<<" ";
        cout<<endl;
        return true;
    }
    
    // picking i
    ds.push_back(arr[i]);
    if(subSum(i+1,n,s-arr[i],arr,ds)) return true;
    
    // not picking i
    ds.pop_back();
    if(subSum(i+1,n,s,arr,ds)) return true;
    
    return false;
}


// print all the subset that make == sum

void Sum(int i,int n,int s,int arr[],vector<int> &ds)
{
    if(i==n)
    {
        if(s==0)
        {
            for(auto it:ds)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    
    if(s==0)
    {
        for(auto it:ds)
            cout<<it<<" ";
        cout<<endl;
        return;
    }

    // now pick ith element
    if(arr[i]<=s){
        ds.push_back(arr[i]);
        Sum(i+1,n,s-arr[i],arr,ds);
        // backtrack
        ds.pop_back();
    }


    // now not pick part
     Sum(i+1,n,s,arr,ds);
}
int main()
{
    int arr[]={1,1,1,2,2,2,4};
    vector<int> vec;
    //subSum(0,3,3,arr,vec);
    Sum(0,7,2,arr,vec);

    return 0;
}
