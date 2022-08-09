#include<bits/stdc++.h>
#include"DS.h"

using namespace std;
struct node {
    int u,v,wt;
    node(int _u,int _v,int _wt){
        u=_u;
        v=_v;
        wt=_wt;
    }
};

bool comp(node f,node s){
    return f.wt<s.wt;
}
void kruskal(vector<node> &edges,int n) {
    DS ds(n);
    vector<node> mst;
    int cost=0;
    // step 1: sort according to edges weight
    sort(edges.begin(),edges.end(),comp);

    // step 2: maek mst
    for(auto it:edges) {
        int u = it.u;
        int v = it.v;
        int wt = it.wt;

        if(ds.findParent(u)!=ds.findParent(v)) {
            ds.unionBySize(u,v);
            cost+=wt;
            mst.push_back(it);
        }
    }
    for(auto it:mst) {
        cout<<it.u<<" "<<it.v<<" "<<it.wt<<endl;
    }
}
int main(){
    int n;
    vector<node> edges;
    for(int i=0;i<n;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }
    kruskal(edges,n);
}