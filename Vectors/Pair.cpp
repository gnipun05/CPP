#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={56,34,12,33,90,7};
    vector <pair <int,int>> v; // <int,char> means pairing of int and char data types

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        v.push_back({arr[i],i});
        // v.push_back(make_pair(arr[i],i)); // shortcut
        /* pair <int ,int> p; // actual method
        p.first=arr[i];
        p.second=i;
        v.push_back(p); */
    }

    for(int i=0; i<v.size(); i++)
        cout << v[i].first << "   "<< v[i].second << endl;

    return 0;
}