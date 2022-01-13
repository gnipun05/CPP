#include <bits/stdc++.h>
using namespace std;

void Substring(string str, string ans)
{
    if(str.size()==0)
    {cout << ans << endl;
    return;}

    string remaining = str.substr(1); // a substring from index 1 to the end of the string
    char ch=str[0];
    int code = ch;
    
    Substring(remaining, ans);
    Substring(remaining, ans+ch);
    Substring(remaining, ans+to_string(code));

    return;
}

int main()
{
    string str;
    cin >> str;

    Substring(str,"");

    return 0;
}