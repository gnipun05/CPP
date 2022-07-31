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

void updateRec(int ss, int se, int i, int si, int diff){
    if(i<ss || i>se)
        return;
    tree[si]=tree[si]+diff;
    if(se==ss) // if only one element is left
        return;
    int mid=(ss+se)/2;
    updateRec(ss, mid, i, si*2+1, diff);
    updateRec(mid+1, se, i, si*2+2, diff);
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
    int new_val=15;
    int idx=1;
    int diff=new_val-nums[idx];
    updateRec(0, n-1, idx, 0, diff);
    return 0;
}