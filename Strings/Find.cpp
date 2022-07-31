/* s.find("ssi"); looks for the substirng {entered in brackets} inside the string s 
 and returns the 1st index at which the 1st letter of the entered string is found else  a garbage value*/
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="mississippi";
    cout << s.find("ssi") << endl; // prints 2
    cout << (s.find("abc")==string::npos);  // prints 1(true); since s doesn't have abc in it, find will return value string::npos
    return 0;
}