/* str.erase( starting index (i), number of characters to be deleted/erased(n)); erases n characters
 from the starting  index i from the String */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="pneumonoultramicroscopicsilicovolcanoconiosis";
    str.erase( 4, 7); //erases 7 characters from index 4 i.e. monoult
    cout << str << endl;
    // str.erase(4); // erase everything after pos 4 [index 3]
    // cout << str << endl;
    // str.erase(); // erase everything // works like str.clear();
    // cout << str << endl;
    
    str.erase(str.begin()+4); // erases character at the given iterator
    cout << str << endl;
    str.erase(str.begin(), str.begin()+4); // erases characters in the given range of iterators
    cout << str << endl;
    return 0;
}