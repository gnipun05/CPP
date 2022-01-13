#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int len;
    cin >> len >> s;

    vector <pair<int,char>> v;
    for(int i=0; i<26; i++)
    {
        v.push_back({0,i});
    }

    for(int i=0; i<len; i++)
    {
        int index=s[i]-97;
        v[index].first=v[index].first+1;
        v[index].second=s[i];
    }

    sort(v.begin(), v.end()); //for a paired vector, sort() will sort the vector in ascending order of first values of pair

    int index=0, maximum=v[0].first;
    for(int i=1; i<26; i++)
    {
        if(v[i].first>maximum)
        {
            index=i;
            maximum=v[i].first;
        }
    }

    cout << v[index].second <<" "<< v[index].first;
    return 0;
}