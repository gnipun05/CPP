#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

bool solve(string a, string b, unordered_map<string, bool> &dp){
    if(a.compare(b)==0)
        return true;
    if(a.size()==1)
        return false;
    string key=a+" "+b;
    if(dp.count(key))
        return dp[key];
    int n=a.size();
    for(int i=1; i<n; i++){
        bool cond1=solve(a.substr(0,i), b.substr(0,i), dp) && solve(a.substr(i, n-i), b.substr(i, n-i), dp);
        bool cond2=solve(a.substr(0,i), b.substr(n-i, i), dp) && solve(a.substr(i, n-i), b.substr(0, n-i), dp);
        if(cond1 || cond2){
            return dp[key]=true;
        }
    }
    return dp[key]=false;
}
bool isScramble(string s1, string s2) {
    int n=s1.size();
    unordered_map<string, bool> dp;
    return solve(s1, s2, dp);
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    isScramble("great", "rgeat");
    return 0;
}