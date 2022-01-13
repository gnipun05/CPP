/* Program to see if entered number is a power of 2
 If n is a power of 2 then n&(n-1) is always equal to 0 (or 0000) */

#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    return n && !(n & n-1); // n&& is done to handle the corner case where n=0
}

int main()
{
    int n;
    cin >> n;

    bool answer=check(n);
    cout << answer << endl;

    return 0;
}