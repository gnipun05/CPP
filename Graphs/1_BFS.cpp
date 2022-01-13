#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int v, int s){
    bool visited[v+1];
    for(int i=0; i<v; i++)
        visited[i]=false;
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int next:adj[u]){
            if(visited[next]==false){
                visited[next]=true;
                q.push(next);
            }
        }
    }
}