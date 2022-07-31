// if n is a power of two, then the size of the array tree will be 2*n-1
// else the size of the array tree will be 2*x-1, where x is the smallest power of 2 after n
// we take an upper bound of 4n as well
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

vector<int> tree;
vector<int> nums;

int constructST(int ss, int se, int si){
    if(se==ss){
        tree[si]=nums[se];
        return tree[si];
    }
    int mid=(ss+se)/2;
    tree[si]=constructST(ss, mid, si*2+1)+constructST(mid+1, se, si*2+2);
    return tree[si];
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    nums={10,20,30,40,50,60};
    int n=6;
    tree.resize(4*n); // or 2*2^(ceil[logn])
    constructST(0, n-1, 0);
    return 0;
}