/* str.length(); and str.size(); --> Both are used to calculate length of String */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="hello";
    char str2[]="hello"; // C-style String
    int len = str.length();
    int size = str.size();
    int arrLen = strlen(str2);
    int arrSize = sizeof(str2);
    cout << len << endl; // prints 5
    cout << size << endl; // prints 5
    cout << arrLen << endl; // prints 5
    cout << arrSize << endl; // prints 6
    return 0;
}