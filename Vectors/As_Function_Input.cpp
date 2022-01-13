#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> &v) // although working even if we don't include  &
{
    for(auto element:v)
        cout << element << endl;
}

int main()
{
    vector<int> vec;
    int element;
    for(int i=0; i<4; i++)
    {
        cin>>element;
        vec.push_back(element);
    }

    display(vec);

    return 0;
}