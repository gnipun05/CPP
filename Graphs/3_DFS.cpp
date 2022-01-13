#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void DFSRec (vector<int> adj[], int v, bool visited[]){
    visited[v]=true;
    cout<<v<<" ";
    for(int u:adj[v]){
        if(visited[u]==false)
            DFSRec(adj, u, visited);
    }
}

void DFS (vector<int> adj[], int v, int s){ // s will store the starting node of the Graph
    bool visited[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    DFSRec(adj, s, visited);
}