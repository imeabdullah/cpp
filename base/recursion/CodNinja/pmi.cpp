#include<iostream>

using namespace std;

int fact(int n)
{
    // base case
    if(n==0) return 1;
    // induction assumption:- will work for K
    int ans=fact(n-1);

    // induction step
    return n*ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}