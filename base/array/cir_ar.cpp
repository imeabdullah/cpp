#include<bits/stdc++.h>

using namespace std;

#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


int main()
{
    BOOST;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    
    cout<<"Enter starting point:";
    int s;
    cin>>s;
    for(int i=s;i<=s+5;i++)
    {
        cout<<arr[i%n]<<endl;
    }


}