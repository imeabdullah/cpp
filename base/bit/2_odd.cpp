#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int Xor=0;
    for(auto it:arr)
        Xor=Xor^it;


    int setbit=(Xor&~(Xor-1)); // give the value where first set bit occurs and consecutive values are zeros

    int xor1=0,xor2=0;

    for(int i=0;i<n;i++)
    {
        if((setbit & arr[i])!=0)
            xor1=xor1^arr[i];
        else
            xor2=xor2^arr[i];
    }
    cout<<xor1<<" "<<xor2<<endl;
}