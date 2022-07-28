#include<bits/stdc++.h>

using namespace std;
const int N=1e6;
bool sieve[N+1];

void make_sieve()
{
    for(int i=0;i<=N;i++)
    {
        sieve[i]=1;
    }
    sieve[0]=0;
    sieve[1]=0;

    for(int i=2;i*i<=N;i++)
    {
        if(sieve[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                sieve[j]=0;
            }
        }
    }
}

int main()
{
    // making black_box
    make_sieve();

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(sieve[n]==1) cout<<"Prime Number"<<endl;
        else cout<<"Not a Prime Number"<<endl;
    }



}
