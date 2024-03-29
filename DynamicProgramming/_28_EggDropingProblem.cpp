#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> dp;
    int superEggDrop(int k, int n) {
        dp.resize(k+1, vector<int> (n+1, -1));
        return solve(k, n);
    }
    int solve(int e, int f){
        if(f==0 || f==1 || e==1)
            return f;
        if(e==0)
            return 0;
        if(dp[e][f]!=-1)
            return dp[e][f];
        int mn=INT_MAX;
        for(int k=1; k<=f; k++){
            int temp=max(solve(e-1, k-1),solve(e, f-k))+1;
            mn=min(mn, temp);
        }
        return dp[e][f]=mn;
    }
};