// This algorithm fails for the DIRECTED Graphs having Negative Cycles {though it can be used to identify negative cycles}
// To apply this algorithm on Undirected Graphs, we need to convert each undrirected edge into 2 directed edges
// Directed Graphs-> algo works for +ve and -ve edges (but not if negative cycles are present)
// Undirected Graphs ->algo works only if all edges are +ve
// Time Complexity: O(N-1)*O(E) -> which is very bad in comparison to Dijstra's Algo
 
// This algo gives us the disatance from source node to all the reachabel nodes in the Graph
// In this Algo we will relax all the edges for N-1 times. And if even after doing so, an edge gets relaxed, then
// it means there is a Cycle present in the Graph

// notice that we didn't made any Adjacency List here, instead we mantained a vector of edges of type struct node

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

struct node{
    int u;
    int v;
    int wt;
    node(int a, int b, int c){
        u=a;
        v=b;
        wt=c;
    }
};

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, m;
    cin>>N>>m;
    vector<node> edges;
    for(int i=0; i<m; i++){
        int u, v, wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt)); // notice we do node(u,v,wt) and not new node(u,v,wt)
    }

    vector<int> dist(N, INT_MAX);

    int src;
    cin>>src;
    dist[src]=0;

    for(int i=0; i<N; i++){ // loop will run for N-1 times
        for(auto it:edges)
            if(dist[it.u]!=INT_MAX && dist[it.v]>dist[it.u]+it.wt) // if found tense, we relax that edge
                dist[it.v]=dist[it.u]+it.wt;
    }

    bool flag=true;
    for(auto it:edges) // if it is found to be tensed even after N-1 
            if(dist[it.u]!=INT_MAX && dist[it.v]>dist[it.u]+it.wt){
                cout<<"Negative Cycle"<<endl;
                flag=false;
                break;
            }
    
    if(flag)
        for(int i=0; i<N; i++)
            cout<<i<<" "<<dist[i]<<endl;

    return 0;
}