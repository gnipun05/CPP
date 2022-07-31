// we run a loop from 0 to n-1 and find for each index the length of longest inc subsequence before it
// Space Complexity: O(n) and Time Complexity: O(n*logn)

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

// function to find Length of Largest Non-Decreasing Subsequence (i.e repeated elements will also be counted in the length of Subsequence)
int lengthOfLNDS(vector<int>& nums) {
    int n=nums.size();
    vector<int> answer;
    answer.pb(nums[0]);
    for(int i=1; i<n; i++){
        auto pt=upper_bound(answer.begin(), answer.end(), nums[i]); // this is a LogN operation
        if(pt!=answer.end())
            *pt=nums[i];
        else
            answer.pb(nums[i]);
    }
    return answer.size(); // size of answer vector is our LIS
}

int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<int> answer;
    answer.pb(nums[0]);
    for(int i=1; i<n; i++){
        auto pt=lower_bound(answer.begin(), answer.end(), nums[i]); // this is a LogN operation
        if(pt!=answer.end())
            *pt=nums[i];
        else
            answer.pb(nums[i]);
    }
    return answer.size(); // size of answer vector is our LIS
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums;
    nums.pb(2);
    nums.pb(2);
    nums.pb(4);
    cout<<lengthOfLIS(nums)<<endl;
    cout<<lengthOfLNDS(nums)<<endl;
    return 0;
}