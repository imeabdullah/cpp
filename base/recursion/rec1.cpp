#include<bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long

void funName(int i,int n)
{
    if(i>n)
        return;
    cout<<"Abdullah"<<endl;
    funName(i+1,n);
}

int main()
{
    //BOOST;
    int i,n;

    cin>>i>>n;

    funName(i,n);

}