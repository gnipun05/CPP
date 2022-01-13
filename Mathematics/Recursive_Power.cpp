#include <bits/stdc++.h>
using namespace std;

int power(int x, int n);
int main()
{
    int x,n;
    cin >> x >> n;
    int answer = power(x,n);
    cout << answer;
    return 0;
}

int power(int x, int n)
{
    if(n==0)
    return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else
    return temp*x;
}