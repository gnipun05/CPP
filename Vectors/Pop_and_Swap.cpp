#include <iostream>
#include <vector> // remember to include <vector> when not including <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);

    cout << v.back() << endl; // v.back() returns the element situated at the last of a vector
    v.pop_back(); // removes the last element from  vector

    for(auto element:v)
        cout << element << endl;

    vector <int> v2(3,50);

    swap(v,v2); // or v.swap(v2); 

    for(auto element:v) // printing new vector v
        cout << element << endl;

    for(auto element:v2) // printing new vector v2
        cout << element << endl;

    return 0;
}