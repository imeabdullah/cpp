
#include <bits/stdc++.h>

using namespace std;

int sum(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int a=12,b=21;

    cout<<a<<" "<<b<<endl;
    sum(a,b);
    cout<<a<<" "<<b<<endl;
}