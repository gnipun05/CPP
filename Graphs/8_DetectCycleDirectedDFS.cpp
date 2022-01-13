#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool detect(vector<int> adj[], int s, bool recSt[], bool visited[]){
    visited[s]=true;
    recSt[s]=true;
    for(int i:adj[s]){
        if(visited[i]==false && detect(adj, i, recSt, visited))
            return true;
        else if(recSt[i]==true) // very important line :- checks back edge
            return true;
    }
    recSt[s]=false;
    return false;
}

bool detectDfs(vector <int> adj[], int v){
    bool recSt[v];
    bool visited[v];
    for(int i=0; i<v; i++){
        recSt[i]=visited[i]=false;
    }
    for(int i=0; i<v; i++){
        if(visited[i]==false){
            if(detect(adj, i, recSt, visited)==true)
                return true;
        }
    }
    return false;
}