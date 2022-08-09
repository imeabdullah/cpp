#include<bits/stdc++.h>
using namespace std;

int const g=1e6+5;
vector<int> adj[g];
bool vis[g];;

void dfs(int node){
    vector<int> dfs;
    stack<int> st;
    st.push(node);
    vis[node]=1;

    while(!st.empty()){
        node=st.top();
        st.pop();
        dfs.push_back(node);

        for(auto it:adj[node]){
            if(vis[it]==false){
                st.push(it);
                vis[it]=1;
            }
           
        }
    }

    for(auto it:dfs) cout<<it<<"->";
    cout<<"Null"<<endl;
}
int color[g];

bool checkBipartite(int node,int col){
    color[node]=col;
    
    for(auto it:adj[node]){
        if(color[it]==-0){
            if(checkBipartite(it,!col));
                return true;
        }
        else if(color[it]==col){
            return false;
        }
    }

    return true;

}
int main(){
    int n,m;

    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(color,-1,sizeof color);
    checkBipartite(1,0);

}