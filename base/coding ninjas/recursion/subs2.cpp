#include<bits/stdc++.h>

using namespace std;

void sub_print(string input,string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    sub_print(input.substr(1),output);
    sub_print(input.substr(1),output+input[0]);
}

int main()
{
    string input;
    cin>>input;

    sub_print(input,"");
}