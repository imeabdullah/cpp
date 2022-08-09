#include<bits/stdc++.h>
using namespace std;

int const g=1e5;
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

void dfs2(int node){
    vector<int> dfs;
    stack<int> st;
    st.push(node);
    vis[node]=1;

    while(!st.empty()){
        node=st.top();
        st.pop();
        dfs.push_back(node);

        for(int i=adj[node].size()-1;i>=0;i--){
            if(vis[adj[node][i]]==false){
                st.push(adj[node][i]);
                vis[adj[node][i]]=1;
            }
           
        }
    }

    for(auto it:dfs) cout<<it<<"->";
    cout<<"Null"<<endl;
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

   dfs2(1); 
}