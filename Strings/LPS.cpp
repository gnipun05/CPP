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
int main(){
    string str="122231222222";
    vi lps(str.size(), 0);
    fillLPS(str, lps);
    for(int i=0; i<str.size(); i++)
        cout<<lps[i]<<" ";
    return 0;
}