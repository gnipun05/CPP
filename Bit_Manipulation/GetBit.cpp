/* A program to get the bit present at a position in  number n */

#include <bits/stdc++.h>
using namespace std;

bool getBit(int n,int p)
{
    return (1<<p)&n ;
}

int main()
{
    int n,position;
    cin >> n >> position;

    bool answer=getBit(n, position);
    cout << answer << endl;

    return 0;
}