#include <bits/stdc++.h>
using namespace std;

void Reverse(string str)
{
    if(str.size()==0)
    return;

    string remaining = str.substr(1); // a substring from index 1 to the end of the string
    
    Reverse(remaining);
    cout << str[0];

    return;
}

int main()
{
    string str;
    cin >> str;

    Reverse(str);

    return 0;
}