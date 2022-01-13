#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);

    vector<int> :: iterator it = v.begin();

    v.insert(it+2,588); // it will insert 588 at index --> it+2
    v.insert(it+1, 4, 785); // it will insert 785 four times at index --> it+1

    for(auto element : v)
    cout << element <<  endl;
    return 0;
}