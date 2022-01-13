// Kahn's Algorithm of Topological Sorting
// This algorithm works only if the graph is Acyclic
// So, we use logic that if number of insertions in Queue are equal to V, then Graph is Acyclic, else Cyclic

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool KahnAlgo(vector<int> adj[], int v, int indegree[]){
    int count=0;
    queue<int> q;
    for(int i=0; i<v; i++)
        if(indegree[i]==0){
            q.push(i);
            count++;
        }    
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i:adj[u]){
            if(--indegree[i]==0){
            q.push(i);
            count++;
            }    
        }
    }
    if(count==v)
        return false;
    return true;
}

bool topologiacalSort(vector<int> adj[], int v){
    int indegree[v]={0};
    for(int i=0; i<v; i++)
        for(int u:adj[i])
            indegree[u]++;
    return KahnAlgo(adj, v, indegree);
}