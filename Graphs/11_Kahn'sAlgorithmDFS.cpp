#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void KahnsAlgo(vector<int> adj[], int s, bool visited[], stack<int> st){
    visited[s]=true;
    for(int i:adj[s]){
        if(visited[i]==false){
            visited[i]=true;
            KahnsAlgo(adj, i, visited, st);
        }
    }
    st.push(s);
}

void topologicalSort(vector<int> adj[], int v){
    stack<int> st;
    bool visited[v];
    for(int i=0; i<v; i++)
        visited[i]=false;
    for(int i=0; i<v; i++)
        KahnsAlgo(adj, i, visited, st);
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
}