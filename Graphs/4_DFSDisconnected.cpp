#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void DFSRec (vector<int> adj[], int v, bool visited[]){
    visited[v]=true;
    for(int u:adj[v]){
        if(visited[u]==false)
            DFSRec(adj, u, visited);
    }
}

int DFS (vector<int> adj[], int v){
    int count=0;
    bool visited[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++)
        if(visited[i]==false){
            DFSRec(adj, i, visited);
            count++;
        }
    return count;
}