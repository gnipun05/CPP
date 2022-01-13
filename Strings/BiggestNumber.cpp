/* Form the biggest possible number from a numeric String */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s="847630675630";
    sort(s.begin(), s.end(), greater<int>()); //greater<int>() will arrange the numbers in decreasing order
    // in place of <int>,  <char> would also had solved the purposse (as it would have used ASCII values)
    cout << s;
    return 0;
}    