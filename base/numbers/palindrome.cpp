#include<bits/stdc++.h>

using namespace std;

bool PalindromeDigit(long long n)
{
    long long temp=n;
    long long res=temp%10;
    temp/=10;

    while(temp>0)
    {
        res=res*10+(temp%10);
        temp/=10;
    }
    return n==res;
}

int main()
{
    long long n;
    cin>>n;

    cout<<(PalindromeDigit(n)?"Palindrome":"Not Palindrome")<<endl;
}
