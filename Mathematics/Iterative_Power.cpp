#include <bits/stdc++.h>
using namespace std;

long long int power (int x, int n)
{
    if(n==0)
    return 1;
    
    long long int result=1;
    while(n>0)
    {
        if(n&1) //if(n%2==1) : both serve the same purpose of checking odd number {BITWISE being faster}
        result*=x;

        x*=x;
        n=n>>1; // n/=2; : both serve the same purpose of dividing by 2 {BITWISE being faster}
    }
    return result;
}

int main()
{
    int x, n;
    cin >> x >> n;

    long long int result=power(x,n);
    cout << result;
    return 0;
}