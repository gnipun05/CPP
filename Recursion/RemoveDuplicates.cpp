#include <bits/stdc++.h>
using namespace std;

void remDuplicate(string str)
{
    if(str.size()==0)
    return;

    if(str[0]!=str[1])
    cout << str[0];

    string remaining = str.substr(1); // a substring from index 1 to the end of the string
    
    remDuplicate(remaining);

    return;
}

int main()
{
    string str;
    cin >> str;

    remDuplicate(str);

    return 0;
}