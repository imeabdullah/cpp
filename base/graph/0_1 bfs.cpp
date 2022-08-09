#include<bits/stdc++.h>

using namespace std;

int const g=1e6+5;
vector<pair<int,int>> adj[g];
bool vis[g];;

void __bfs_0_1(int node,int n){
    deque<pair<int,int>> dq;

    vector<int> dis(n,INT_MAX);
    dis[node]=0;
    dq.push_front({0,node});

    while(!dq.empty()){
        node=dq.front().first;
        int distance=dq.front().second;
        dq.pop_front();

        for(auto it:adj[node]){
            int currNode=it.first;
            int currWeight=it.second;
            
            
            if(distance+currWeight<dis[currNode]){
                dis[currNode]=(distance+currWeight);
                if(currWeight==1)
                    dq.push_back({currNode,(distance+currWeight)});
                else
                    dq.push_front({currNode,distance});
            }
        }
    }

    int x;
    cin>>x;
    cout<<dis[x]<<endl;
}

int main()
{
    int n,m;
    cin>>n>>m;


    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

}