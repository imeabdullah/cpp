#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long


// 1 to N

void funBackTrack(int n)
{
    if(n<1) return;
    funBackTrack(n-1);
    cout<<n<<endl;
}

// N to 1 using backtrack

void fun(int i,int n)
{
    if(i>n)
        return;
    fun(i+1,n);
    cout<<i<<endl;
}

int main()
{
    // BOOST;
    // funBackTrack(4);
    fun(1,3);
}