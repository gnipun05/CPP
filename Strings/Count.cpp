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
    string temp="hey there wassup people";
    int answer=(int)count(temp.begin(), temp.end(), ' '); // ' ' can be replaced with any other CHARACTER
    cout<<answer+1;
    return 0;
}