#include <bits/stdc++.h>
using namespace std;

int calculate(int n)
{
    int count = 0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int answer=calculate(n);
    cout << answer << endl;

    return 0;
}