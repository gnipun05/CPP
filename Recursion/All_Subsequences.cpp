/* Substrings of ABC are:
1. {Empty String}
2. A
3. B
4. AB
5. C
6. AC
7. BC
8. ABC */

#include <bits/stdc++.h>
using namespace std;

void Substring(string str, string ans)
{
    if(str.size()==0)
    {cout << ans << endl;
    return;}

    string remaining = str.substr(1); // a substring from index 1 to the end of the string
    char ch=str[0];
    
    Substring(remaining, ans);
    Substring(remaining, ans+ch);

    return;
}

int main()
{
    string str;
    cin >> str;

    Substring(str,"");

    return 0;
}