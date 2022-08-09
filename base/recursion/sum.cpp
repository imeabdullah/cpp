#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void subSum(int i,int n,int sum,int s,int arr[],vector<int> &vec)
{
    if(i==n)
    {
        if(sum==s)
        {
            for(auto it:vec)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    if(s>sum)
        return;

    // picking one element
    s+=arr[i];
    vec.push_back(arr[i]);
    subSum(i+1,n,sum,s,arr,vec);

    // not pick
    s-=arr[i];
    vec.pop_back();
    subSum(i+1,n,sum,s,arr,vec);
}

bool subSumSingle(int i,int n,int sum,int s,int arr[],vector<int> &vec)
{
    if(i==n)
    {
        if(sum==s)
        {
            for(auto it:vec)
                cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }

    if(s>sum)
        return false;

    // picking one element
    s+=arr[i];
    vec.push_back(arr[i]);
    if(subSumSingle(i+1,n,sum,s,arr,vec)) return true; 
    

    // not pick
    s-=arr[i];
    vec.pop_back();
    if(subSumSingle(i+1,n,sum,s,arr,vec)) return true;

    return false;
}


int main()
{
    // BOOST;
    int arr[]={1,2,1};
    int n=3;
    int sum=2;

    vector<int> vec;

    //subSum(0,n,sum,0,arr,vec);
    subSumSingle(0,n,sum,0,arr,vec);
}