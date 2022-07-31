#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

bool checkRotation(string s1, string s2){
    if(s1.size()!=s2.size())
        return false;
    bool answer=((s1+s1).find(s2)!=string::npos);
    return answer;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}