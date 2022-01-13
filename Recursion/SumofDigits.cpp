// program to calculate sum of digits of a number

#include <bits/stdc++.h>
using namespace std;

int sumofdigits(int n)
{
    if (n==0) // or if (n<=9)  {both works fine}
        return n;
    
    return n%10 + sumofdigits(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumofdigits(n);
    return 0;
}