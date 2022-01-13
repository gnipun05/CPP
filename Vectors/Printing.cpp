#include <iostream>
#include <vector> // remember to include this header file when not using <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(8);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++) // its size() and not sizeof() // prints 1 8 4
        cout << v[i] << endl;

    vector<int> :: iterator it; // prints 1 8 4
    for(it=v.begin(); it!=v.end(); it++)
        cout << *it << endl;

    for(auto element:v) // prints 1 8 4
        cout << element << endl;

    // vector<int> v2(3,50);
    // for(vector<int> :: iterator it2=v2.begin(); it2!=v2.end(); it2++)
    //     cout << *it << endl;

    return 0;
}