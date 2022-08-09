#include<bits/stdc++.h>
using namespace std;

int const g=1e6+5;
vector<int> adj[g];
bool vis[g];;

// using dfs
void topoSortDFS(int node,stack<int> &st){
    vis[node]=1;

    for(auto it:adj[node]){
        if(!vis[it]){
            topoSortDFS(it,st);
        }
    }
    st.push(node);
}

// Kan's Algorithm
void topoSortKans(int node,int n){
    vector<int> indegree(n,0);

    for(int i=0;i<n;i++){
        for(auto it:adj[node]){
            // i --> it
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    vector<int> ans;
    while(q.empty()){
        node=q.front();
        vis[node]=true;
        ans.push_back(node);
        for(auto it:adj[node]){
            // if(vis[it]==false){
            //     vis[it]==true;
            //     q.push(it);
            // }else continue;

            indegree[it]--;
            if(indegree[it]==0) q.push(it);

        }
    }

    for(auto it:ans)
        cout<<it<<" ";
    cout<<endl;
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
    stack<int> st;
    topoSort(1,st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}