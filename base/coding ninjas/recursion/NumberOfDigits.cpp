#include<iostream>

using namespace std;

int NumberOfDigits(int n,int count=0)
{
    if(n==0)
    {
        return count;
    }
    NumberOfDigits(n/10,count+1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<NumberOfDigits(n)<<endl;
    }
}