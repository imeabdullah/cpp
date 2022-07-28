#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter in Decimal"<<endl;
    cin>>n;
    stack<int> bin;
    
    while(n>0)
    {
        bin.push(n%2);
        n/=2;
    }
    
    cout<<"In Binary"<<endl;
    while(!bin.empty())
    {
        cout<<bin.top()<<"";
        bin.pop();
    }
}
