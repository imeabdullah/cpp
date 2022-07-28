#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void funNto1(int n)
{
    if(n<1) return;
    cout<<n<<endl;
    funNto1(n-1);
}


int main()
{
    //BOOST;
    funNto1(4);
}