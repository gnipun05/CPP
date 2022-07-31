#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

unordered_map<string ,int> m;

int solve(string s, int i, int j, bool isTrue){ // isTrue contains the boolean value expected from the passed expression
    if(i>j)
        return 0;
    if(i==j){
        if(isTrue)
            return s[i]=='T';
        else
            return s[i]=='F';
    }
    string temp=to_string(i)+" "+to_string(j)+" "+to_string(isTrue);
    if(m.count(temp))
        return m[temp];
    int ans=0;
    for(int k=i+1; k<j; k+=2){
        int leftT=solve(s, i, k-1, true);
        int leftF=solve(s, i, k-1, false);
        int rightT=solve(s, k+1, j, true);
        int rightF=solve(s, k+1, j, false);

        if(s[k]=='^'){
            if(isTrue)
                ans+=leftT*rightF + leftF*rightT;
            else
                ans+=leftT*rightT + leftF*rightF;
        }
        else if(s[k]=='|'){
            if(isTrue)
                ans+=leftT*rightT + leftT*rightF + leftF*rightT;
            else
                ans+=leftF*rightF;
        }
        else if(s[k]=='&'){
            if(isTrue)
                ans+=leftT*rightT;
            else
                ans+=leftF*rightF + leftT*rightF + leftF*rightT;
        }
    }
    m[temp]=ans;
    return m[temp];
}

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s="T^T^T^F|F"; // correct answer for this should be 2
    int n=s.size();
    cout<<solve(s, 0, n-1, true)<<endl;
    return 0;
}