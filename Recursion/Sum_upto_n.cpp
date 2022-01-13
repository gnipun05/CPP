#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)
    return 0;
    
    int previousSum = sum(n-1);
    return n+previousSum ;
}

int main()
{
    int n;
    cin >> n;

    int  answer = sum(n);
    cout << answer;
    return 0;
}