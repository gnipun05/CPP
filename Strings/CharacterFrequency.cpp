#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline (cin,s);
    transform(s.begin(), s.end(), s.begin(), :: tolower);

    int freq[26]={0};
    
    for(int i=0; i<s.size(); i++)
    freq[s[i]-'a']++;

    int maxi=0;
    char maxc=' ';
    for(int i=0; i<26; i++)
    {
        if(maxi<freq[i])
        {
            maxi=freq[i];
            maxc=i+'a';
        }
    }

    cout << maxc << "   " << maxi;

    return 0;
}