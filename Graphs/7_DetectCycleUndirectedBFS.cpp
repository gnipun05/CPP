#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool detect (vector <int> adj[], int s, int v, bool visited[]){
    vector<int>parent(v,-1);
    queue<int> q; // instead of making a new parent array, we can instead make a pair in Queue storing the present and its parent vertices
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        for(int i:adj[u]){
            if(visited[i]==false){
                parent[i]=u;
                visited[i]=true;
                q.push(i);
            }
            else if(parent[u]!=i) // Very important line
                return true;
        }
    }
    return false;
}

bool detectBfs(vector<int> adj[], int v){
    bool visited[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v ;i++){
        if(visited[i]==false){
            if(detect(adj, i, v, visited)==true) 
                return true;
        }
    }
    return false;
}