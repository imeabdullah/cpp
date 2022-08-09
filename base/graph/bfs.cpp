#include<bits/stdc++.h>

using namespace std;

int const g=1e6+5;
vector<int> adj[g];
bool vis[g];;

void bfs(int node){
    vis[node]=1;
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        node=q.front();
        cout<<node<<" ";
        q.pop();

        for(auto it:adj[node]){
            q.push(it);
            vis[it]=1;
        }
    }
}

void bfsSolve(int n){
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            bfs(i);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;


    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    bfsSolve(1);
}