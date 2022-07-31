// we run a loop from 0 to n-1 and find for each index the length of longest inc subsequence before it
// Space Complexity: O(n) and Time Complexity: O(n*n)

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<int>dp(n,1); // dp[i] stores the length of longest inc. subsequence, ENDING WITH ELEMENT AT INDEX i
    int omax=0; // to store overall maximum length of Increasing Subsequence
    for(int i=0; i<n; i++){
        int mx=0;
        for(int j=0; j<i; j++){
            if(nums[i]>nums[j]){
                if(dp[j]>mx)
                    mx=dp[j];
            }
        }
        dp[i]=mx+1; // length of longest increasing subsequence + 1 for the present element
        omax=max(omax, dp[i]);
    }
    return omax;
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}
