#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool detect(vector<int> adj[], int s, bool visited[], int parent){
    visited[s]=true;
    for(int i:adj[s]){
        if(visited[i]==false){
            if(detect(adj, i, visited, s)==true){
                return true;
            }
        }
        else if (parent!=i)
            return true;
    }
    return false;
}

bool detectDfs(vector<int> adj[], int v){
    bool visited[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v ;i++){
        if(visited[i]==false){
            if(detect(adj, i, visited, -1)==true) // whenever this statement will get executed, it will be the first node of Graph.  Therefore parent = -1
                return true;
        }
    }
    return false;
}