#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

bool areSame(vector<int> &a, vector<int> &b){
    for(int i=0; i<26; i++)
        if(a[i]!=b[i])
            return false;
    return true;
}
vector<int> findAnagrams(string s, string p) {
    int n=s.size();
    int m=p.size();
    if(n<m)
        return {};
    vector<int> arrs(26,0);
    vector<int> arrp(26,0);
    for(int i=0; i<m; i++){
        arrs[s[i]-'a']++;
        arrp[p[i]-'a']++;
    }
    vector<int>answer;
    for(int i=m; i<n; i++){
        if(areSame(arrs, arrp))
            answer.push_back(i-m);
        arrs[s[i]-'a']++;
        arrs[s[i-m]-'a']--;
    }
    if(areSame(arrs, arrp))  // if(arrs==arrp) can also be used to compare if two vectors are equal or not
        answer.push_back(n-m);
    return answer;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}