/* str.erase( index (i), string to be Inserted("el")); inserts a substring at
  index i of String str */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="hlo";
    str.insert(1, "el");
    cout << str;
    return 0;
}