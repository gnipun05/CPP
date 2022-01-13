#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin , str);

    int arr[26];
    for(int i=0; i<26; i++)
    arr[i]=0;
    
    int len = str.length();
    int count =0;

    for(int i=0; i<len; i++)
    {
        int store = str.at(i);
        if(store>=97 && store<=122)
        arr[store-97]=1;
    }

    for(int i=0; i<26; i++)
    if(arr[i]==1)
    count ++;

    cout << count;
    return 0;
}