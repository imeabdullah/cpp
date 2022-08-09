#include<bits/stdc++.h>
using namespace std;

int const g=1e6+5;
vector<pair<int,int>> adj[g];
bool vis[g];

void dijkstraDFS(int start,int end,int n){
    int distance[n];
    for(int i=0;i<n;i++)
        distance[i]=INT_MAX;

    stack<pair<int,int>> st;
    st.push({start,0});

    while(!st.empty()){
        int node=st.top().first;
        int dis=st.top().second;
        st.pop();

        for( auto it:adj[node] ){
            int currNode=it.first;
            int weight=it.second;

            if( (dis + weight) < distance[currNode] ) {
                distance[currNode]=(dis+weight);
                st.push({currNode,( dis + weight )});
            }
        }
    }
    cout<<distance[end]<<endl;
}

int main(){
    int n,m;

    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int s,e;
    cin>>s>>e;
    dijkstraDFS(s,e,n);

}