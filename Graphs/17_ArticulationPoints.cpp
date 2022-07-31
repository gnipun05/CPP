// ** by Individual Children we mean that a seperate DFS call will be made for each of them
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void dfs(int node, int parent, vector<int> adj[], vector<bool> &visited, vector<int> &tin, vector<int> &low, int timer, unordered_set<int> &answer){
    visited[node]=1;
    tin[node]=low[node]=timer++;
    int child=0; //this is helpful only for the 1st node of the Graph // child counts "Individual Children" and not "Children" (**)
    for(int it:adj[node]){
        if(it==parent)
            continue;
        if(!visited[node]){
            dfs(it, node, adj, visited, tin, low, timer, answer);
            low[node]=min(low[node], low[it]);
            if(low[it]>=tin[node] && parent!=-1) // = equal sign is added and parent != -1 is added in comp to ques. Bridges in Graph
                answer.insert(node); // unlike Bridges in Graph, we dont print the result as there might be repetition; thus set is used
            child++; 
        }
        else
            low[node]=min(low[node], tin[it]);
    }
    if(parent == -1 && child>1) // this is to check if removing the root node of graph makes the graph disconected {i.e. if root node an articulation point or not}
        answer.insert(node);
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n, false);
    vector<int> tin(n, -1);
    vector<int> low(n, -1);
    unordered_set<int> answer;
    for(int i=0; i<n; i++)
        if(visited[i])
            dfs(i, -1, adj, visited, tin, low, 0, answer);
    for(int x:answer)
        cout<<x<<endl;
    return 0;
}