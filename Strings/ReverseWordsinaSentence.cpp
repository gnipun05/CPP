#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
typedef std::vector<int> vi;
typedef std::vector<vector<int>> vvi;
#define endl '\n'
#define push_back pb

string reverseWords(string &str, int n){
    int start=0;
    for(int end=0; end<n-1; end++){
        if(str[end]==' '){
            reverse(str.begin()+start, str.begin()+end);
            start=end+1;
        }
    }
    reverse(str.begin()+start,str.end());
    reverse(str.begin(),str.end());
    return str;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cout<<"Enter a Sentence: "<<endl;
    getline(cin, str);
    reverseWords(str, str.size());
    cout<<str;
    return 0;
}