// initialise function has time complexity logn
// biTree is formed by calling initialise function for n times (therefore biTree creation is an nlogn process)
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

int n;
vector<int> biTree;
vector<int> arr;

void initialise(int i, int val){
    i=i+1; // as biTree has all numbers shifted one place to the right due to the dummy node in the front
    while(i<=n){
        biTree[i]+=val;
        i=i+(i&(-i)); // now i will give the index of its child in the biTree
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    biTree.resize(n+1, 0);
    arr={10, 20, 30, 40, 50};
    n=arr.size();
    for(int i=0; i<n; i++)
        initialise(i,arr[i]);
    // below is the part to update a number
    int val = 32;
    int idx = 2;
    int diff=val-arr[idx];
    arr[idx]=val;
    initialise(idx, diff);
    return 0;
}