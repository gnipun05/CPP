#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void dfs(int node, int parent, vector<int> adj[], vector<bool> &visited, vector<int> &tin, vector<int> &low, int timer){
    visited[node]=1;
    tin[node]=low[node]=timer++;
    for(int it:adj[node]){
        if(it==parent)
            continue;
        if(!visited[node]){
            dfs(it, node, adj, visited, tin, low, timer);
            low[node]=min(low[node], low[it]);
            if(low[it]>tin[node])
                cout<<node<<" "<<it<<endl;
        }
        else
            low[node]=min(low[node], tin[it]);
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n, false);
    vector<int> tin(n, -1);
    vector<int> low(n, -1);
    for(int i=0; i<n; i++)
        if(!visited[i])
            dfs(i, -1, adj, visited, tin, low, 0);
    return 0;
}