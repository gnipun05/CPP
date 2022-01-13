/* A program to set a bit on a position in a number n 
  Setting a bit means making the bit = 1 */

#include <bits/stdc++.h>
using namespace std;

int setBit(int n,int p)
{
    return (1<<p) | n ;
}

int main()
{
    int n,position;
    cin >> n >> position;

    int answer=setBit(n, position);
    cout << answer << endl;

    return 0;
}