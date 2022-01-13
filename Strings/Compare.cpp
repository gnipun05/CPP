/* s1.compare(s2) function compares the ASCII values of 1st character of each string and compares 
2nd character only if in both strings 1st character are same.
if:
s1 > s2 --> positive number
s1 < s2 --> negative number
s1 = s2 -->         0             */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1="abc";
    string s2="xyz";
    int answer=s1.compare(s2); 
    cout << answer; // prints -23 (97-120)
    return 0;
}