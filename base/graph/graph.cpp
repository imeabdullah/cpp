#include<bits/stdc++.h>

using namespace std;

void adjacenyMatrix(){
    int n,m;
    cin>>n>>m;
    int graph[n+1][n+1]={0};

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<graph[i][j]<<" ";
        cout<<endl;
    }
}

void adjacencyList(){
    int n,m;
    cin>>n>>m;
    int graph[n+1][n+1]={0};

    vector<int> G[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
    }

    for(auto g:G)
    {
        for(auto it:g)
            cout<<it<<" ";
        cout<<endl;
    }
}
int main(){
   // adjacenyMatrix();
   // adjacencyList();
}