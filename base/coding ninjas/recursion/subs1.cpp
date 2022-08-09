#include<bits/stdc++.h>

using namespace std;

int subs(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }

    int smallOutputSize=subs(input.substr(1),output);
    
    for(int i=0;i<smallOutputSize;i++)
    {
        output[i+smallOutputSize]=input[0]+output[i];
    }
    return smallOutputSize*2;
}

int main()
{
    string input;
    cin>>input;

    int size=pow(2,input.length());

    string* output=new string[size];
    subs(input,output);
    for(int i=0;i<size;i++)
        cout<<output[i]<<endl;
    delete[] output;
}