#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

int main(){
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vi test(5);
        test.pb(3);
        vector <int> :: iterator it;
        for(it=test.begin(); it!=test.end(); it++) // prints 5 0s and the one 3 i.e 0 0 0 0 0 3
                cout<<*it<<"\n";
        return 0;
}