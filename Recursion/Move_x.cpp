#include <bits/stdc++.h>
using namespace std;

string move(string str)
{
    if(str.size()==0)
    return ""; // empty string

    string answer = move(str.substr(1));
    
    if(str[0]=='x')
    return answer+str[0];
    
    return str[0]+answer;
}

int main()
{
    string str;
    cin >> str;

    string answer = move(str);

    cout << answer;
    return 0;
}