#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int calcLength (vector<int> adj[], int v, int s){
    bool visited[v];
    int dist[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++)
        dist[i]=INT_MAX;
    queue<int> q;
    visited[s]=true;
    dist[s]=0;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        for(int i:adj[u]){
            if(visited[i]==false){
                visited[i]=true;
                dist[i]=dist[u]+1;
                q.push(i);
            }
        }
    }
    for(int i:dist)
        cout<<i<<" ";
}
