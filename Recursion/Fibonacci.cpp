/*  0th fibonacci number is 0
    1st fibonacci number is 1
    2nd fibonacci number is 1
    3rd fibonacci number is 2 */

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    return n;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;

    int answer = fib(n);
    cout << answer;
    return 0;
}