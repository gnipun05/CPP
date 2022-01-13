/*str.substr(4,9); this returns a substring of str from index value 4 and consisting of 
  9 characters including the character at 4 */
  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="pneumonoultramicroscopicsilicovolcanoconiosis";
    cout << str.substr(4,9); // prints monoultra
    return 0;
}