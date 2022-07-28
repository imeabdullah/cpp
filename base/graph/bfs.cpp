#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> G[n+1];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
    }

    // BFS code is below
    vector<int> bfs;
    bool visited[n+1]={0};

    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            queue<int> q;
            q.push(i);
            visited[i]=1;

            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it:G[node])
                {
                    if(!visited[it])
                    {
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
            
        }
    }

    cout<<"BFS:";
    for(auto it:bfs)
        cout<<it<<" ";
}