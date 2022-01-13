// Kahn's Algorithm of Topological Sorting
// This algorithm works only if the graph is Acyclic

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void KahnAlgo(vector<int> adj[], int v, int indegree[]){
    queue<int> q;
    for(int i=0; i<v; i++)
        if(indegree[i]==0)
            q.push(i);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i:adj[u]){
            if(--indegree[i]==0)
                q.push(i);
        }
    }
}

void topologiacalSort(vector<int> adj[], int v){
    int indegree[v]={0};
    for(int i=0; i<v; i++)
        for(int u:adj[i])
            indegree[u]++;
    KahnAlgo(adj, v, indegree);
}