#include <bits/stdc++.h>
using namespace std;

int clearBit(int n,int p)
{
    int temp = 1<<p;
    temp= ~ temp; // taking 1s complement of temp and storing it in temp itself
    return (temp & n);
}

int main()
{
    int n,position;
    cin >> n >> position;

    int answer=clearBit(n, position);
    cout << answer << endl;
    return 0;
}