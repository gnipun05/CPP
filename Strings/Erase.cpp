/* str.erase( starting index (i), number of characters to be deleted/erased(n)); erases n characters
 from the starting  index i from the String */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="pneumonoultramicroscopicsilicovolcanoconiosis";
    str.erase( 4, 7); //erases 7 characters from index 4 i.e. monoult
    cout << str;
    return 0;
}