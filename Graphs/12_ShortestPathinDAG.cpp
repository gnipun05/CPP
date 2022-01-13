#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define endl '\n'

using namespace std;

vector<int> shortestDist (vector <int> adj[], vector <int> weight[], int v, int s){
    vector<int> sorted = topologicalSort(adj, v);
    vector<int> dist(v,INT_MAX);
    dist[s]=0;
    for(int i:sorted){
        for(int j:adj[i]){
            if(dist[j]>dist[i]+weight[i][j])
                dist[j]=dist[i]+weight[i][j];
        }
    }
    return dist;
}

vector<int> topologicalSort(vector<int> adj[], int v){
    vector<int> sorted(v);
    int indegree[v]={0};
    for(int i=0; i<v; i++)
        for(int j:adj[i])
            indegree[j]++;

    queue<int> q;
    for(int i=0; i<v; i++)
        if(indegree[i]==0)
            q.push(i);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        sorted.push_back(u);
        for(int i:adj[u])
            if(--indegree[i]==0)
                q.push(i);
    }
    return sorted;
}