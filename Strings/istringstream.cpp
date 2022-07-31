#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define pb push_back

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str="hey there wassup";
    istringstream in(str);
    int i = 0;
    for (string word; in >> word; ++i) {
        cout<<word<<endl;
    }
    cout<<i; // this is to see the number of times loops run {here it is 3}
    return 0;
}