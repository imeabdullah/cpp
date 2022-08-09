#include<bits/stdc++.h>
using namespace std;

int const g=1e5;
vector<int> adj[g];
bool vis[g];;

void dfs(int node){
    cout<<node<<" ";
    vis[node]=1;

    for(auto it:adj[node]){
        if(vis[it]==0){
            dfs(it);
        }
    }
}

void dfsSolve(int n){
    for(int i=1;i<n;i++){
        if(vis[i]==0){
            dfs(i);
        }
    }
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

   dfsSolve(n); 
}