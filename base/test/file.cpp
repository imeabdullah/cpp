#include<bits/stdc++.h>
using namespace std;

int main() {
    // reading and writting file
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int a,b,c;
    cin>>a>>b>>c;
    cout<<a*2<<" "<<b*2<<" "<<c*2<<endl;

    vector<vector<int>> vec(5,vector<int>(5,0));

    for(auto it:vec) {
        cout<<it[0]<<endl;
        cout<<it[1]<<endl;
    }
}