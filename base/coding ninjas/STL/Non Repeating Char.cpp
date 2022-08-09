#include<bits/stdc++.h>

using namespace std;

char nonRepeatingChar(string st){
    map<char,int> mp;
    
    for(int i=0;i<st.size();i++){
        mp[st[i]]++;
    }

    for(int i=0;i<st.size();i++)
        if(mp[st[i]]==1) return st[i];
    return st[0];
}

int main(){
    string inp="aabbccdeeff";

    cout<<nonRepeatingChar(inp)<<endl;
}