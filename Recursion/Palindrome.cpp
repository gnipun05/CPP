#include <bits/stdc++.h>
using namespace std;

bool evaluatePalindrome(string str,int start, int end)
{
    if(start>=end)
        return true;

    return (str[start]==str[end])&&(evaluatePalindrome(str,start+1,end-1));
}

int main()
{
    string str;
    cin>>str;
    cout << boolalpha << evaluatePalindrome(str,0,str.length()-1);
    return 0;
}