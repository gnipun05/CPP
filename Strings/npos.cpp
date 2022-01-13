#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Just Dance";
    if(str.find("mce")==string::npos) // npos is used to check if the substring is present in string or not
        cout << "Substring Not Found";
    else
        cout << "Substring is Found";
    return 0;
}