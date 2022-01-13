// Applying BFS in a Disconnected Graph

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void BFS(vector<int> adj[], int v, int s, bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<< " ";
        for(int next:adj[u]){
            if(visited[next]==false){
                visited[next]=true;
                q.push(next);
            }
        }
    }
}

int BFSDisc(vector<int> adj[], int v){
    int count=0; // this is to count the number of Disjoint Graphs
    bool visited[v+1];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++)
        if(visited[i]==false){
            BFS(adj, v, i, visited);
            count++;
        }
    return count;
}