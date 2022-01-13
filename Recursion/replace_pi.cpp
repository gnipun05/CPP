/* A program to replace all the pi from the string with its numerical value */

#include <bits/stdc++.h>
using namespace std;

void Replace(string str)
{
    if(str.length()==0)
    return;

    if(str[0]=='p' && str[1]=='i')
    {
        cout << 3.14;
        Replace(str.substr(2));
        return;
    }

    else
    {
        cout << str[0];
        Replace(str.substr(1));
        return;
    }
}

int main()
{
    string str="pippxxppiixip";

    Replace(str);

    return 0;
}