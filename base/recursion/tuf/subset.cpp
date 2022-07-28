#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void subSet(int i,int n,int arr[],vector<int> &vec)
{
    if(i==n)
    {
        cout<<"{ ";
        for(auto it:vec)
            cout<<it<<" ";
        cout<<"}\n";
        return;
    }
    // pick in ds
    vec.push_back(arr[i]);

    subSet(i+1,n,arr,vec);

    // not pick on ds
    vec.pop_back();

    subSet(i+1,n,arr,vec);
} 

int main()
{
    int arr[]={3,1,2};

    vector<int> vec;
    subSet(0,3,arr,vec);
}