#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==1)
    return 1;

    int prevFactorial = factorial (n-1);
    return n*prevFactorial;
}

int main()
{
    int n;
    cin >> n;

    int answer = factorial(n);
    cout << answer;
    return 0;
}