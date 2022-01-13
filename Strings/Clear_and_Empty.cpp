/* s.clear(); clears the string s and makes it an empty string 
   s.empty(); checks if a string is empty and returns 1 if true */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="hello";
    cout << s << endl;
    s.clear();
    cout << s << endl; // prints an empty string
    cout << "clear function has been called" << endl;

    if(s.empty())    
    cout << "String is empty";
    return 0;
}