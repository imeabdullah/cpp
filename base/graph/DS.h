#include<bits/stdc++.h>
using namespace std;
class DS{
    private:
    vector<int> parent,size,rank;
    public:
    DS(int n){
        for(int i=1;i<n;i++){
            parent.push_back(i); // each nodes parent is itself
            size.push_back(1); // size of all node is zero
            rank.push_back(0); // rank is zero for all node
        }
    }

    void unionBySize(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);

        if(parent[u]==parent[v])
            return;
        // if pu is size less
        // connect pu with pv
        // and increase the size
        // else do the opposite
        if(size[pu] < size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pv];
        }else{
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
    }

    void unionByRank(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);

        if(pu==pv) return;

        if(rank[pu] == rank[pv]){
            rank[pu]++;
            parent[pv]=pu;
        }
        else if(rank[pu] > rank[pv]){
            parent[pv]=pu;
        }else{
            parent[pu]=pv;
        }
    }
    int findParent(int node){
        if(parent[node]==node) return node;
        // path compression ->(log n)
        // path compression and size compression (4xalpha)
        return parent[node]=findParent(node);
    }

    int findParentIter(int node){
        if(parent[node]==node)
            return node;
        // finding ultimate parrent
        // node->parent[node]
        while ( parent[node]!=node) {
            node=parent[node];
        }
        return node;
    }

    int findParentItr(int node){
        if(parent[node] == node) 
            return node;
        
        int currNode=node;
        stack<int> st;
        st.push(currNode);

        while(currNode!=parent[currNode]) {
            st.push(parent[currNode]);
            currNode=parent[currNode];
        }

        int gp=st.top();
        st.pop();
        while(st.empty()){
            parent[st.top()]=gp;
            st.pop();
        }
        return gp;
    }


};

// Union will connect nodes with same parent
// This will help us to find that 2 or more nodes are belongs to same components or not