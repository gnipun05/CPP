#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

vector<int> biTree;
int getSum(int i){
    i=i+1; // as biTree has all numbers shifted one place to the right due to the dummy node in the front
    int res=0;
    while(i>0){
        res=res+biTree[i];
        i=i-(i&(-i)); // now i will give the index of its parent in the biTree
    }
    return res;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 10;
    biTree.resize(n+1); // one extra is for the starting dummy node; we never access it
    int idx=5;
    getSum(idx);
    return 0;
}