#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

void fillLPS(string str, vector<int> &lps){
    int n=lps.size();
    int len=0;
    int i=1;
    lps[0]=0;
    while(i<n){
        if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len==0){
                lps[i]=0;
                i++;
            }
            else{
                len=lps[len-1];
            }
        }
    }
}

void KMP(string txt, string pat){
    int n=txt.size();
    int m=pat.size();
    vi lps(m,0);
    fillLPS(pat, lps);
    int i=0, j=0;
    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<i-m<<" ";
            j=lps[j-1];
        }
        else if(i<n && txt[i]!=pat[j]){
            if(j==0)
                i++;
            else
                j=lps[j-1];
        }
    }
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}