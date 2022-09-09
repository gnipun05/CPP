// Kosaraju's Algorithm for Strongly Connected Components (SCC) {for Directed Graphs}
// first find the Topological Sort of the Graph
// then transpose the graph
// and finally traverse the transposed graph in dfs as per the topological order, which was found in the beginning
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void dfs(vector<int> adj[], int s, vector<int> &visited, stack<int> &st){
    visited[s]=true;
    for(int &i:adj[s]){
        if(visited[i]==false){
            dfs(adj, i, visited, st);
        }
    }
    st.push(s);
}

void revDfs(vector<int> transpose[], int s, vector<int> &visited){
    visited[s]=true;
    cout<<s<<" ";
    for(int &i:transpose[s]){
        if(visited[i]==false)
            revDfs(transpose, s, visited);
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    stack <int> st;
    vector<int> visited(n, false);
    
    // storing topological sort
    for(int i=0; i<n; i++)
        if(visited[i]==false)
            dfs(adj, i, visited, st);
    
    vector<int> transpose[n];
    // storing transpose of the graph
    for(int i=0; i<n; i++){
        visited[i]=false; // making visited to store all values as false
        for(int it:adj[i])
            transpose[it].push_back(i);
    }

    // traversing the transpose in the topological order and printing the SCC simultaneously
    while(st.empty()==false){
        int node=st.top(); st.pop();
        if(visited[node]==false){
            cout<<"SCC: ";
            revDfs(transpose, node, visited);
            cout<<endl;
        }
    }
    return 0;
}