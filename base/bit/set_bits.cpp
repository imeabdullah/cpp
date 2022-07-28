#include<bits./stdc++.h>

using namespace std;

int naive(int n)
{
    int cnt=0;
    while(n>0)
    {
        if(n&1) cnt++;
        n>>=1;
    }
    return cnt;
}

int brian_kerningam(int n)
{
    int cnt=0;
    while(n>0)
    {
        n=n&(n-1);
        cnt++;
    }
    return cnt;
}


// Lookup table approach
void create_lookup(int table[])
{
    table[0]=0;
    for(int i=1;i<256;i++)
    {
        table[i]=table[i>>1]+(i&1);
    }
}

int main()
{
    //cout<<naive(10)<<endl;
    //cout<<brian_kerningam(10)<<endl;
    int table[256];
    create_lookup(table);

    int n;
    cin>>n;
    int bitn=0;
    for(int i=0;i<4;i++)
    {
        bitn+=table[n&255];
        n>>=8;
    }

    cout<<bitn<<endl;
}