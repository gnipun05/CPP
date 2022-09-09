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
        int mn=INT_MAX;
        int l=1, r=f;
        while(l<=r){
            int k=(l+r)/2;
            int left=(dp[e-1][k-1]!=-1)?dp[e-1][k-1]:solve(e-1, k-1);
            int right=(dp[e][f-k]!=-1)?dp[e][f-k]:solve(e, f-k);
            int temp=max(left, right)+1;
            mn=min(mn, temp);
            if(left<right)
                l=k+1;
            else
                r=k-1;
        }
        return dp[e][f]=mn;
    }
};