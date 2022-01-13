#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define push_back pb

using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    cin>>str; // this will stop reading entered string as soon as a " " is encountered
    getline(cin, str); // get line is used to read a sentence from user. It won't terminate until it encounters a new line char (or until we press an enter)
    getline(cin, str, '#'); // this wont stop reading str until it encounters a '#' (Hash)
    return 0;
}