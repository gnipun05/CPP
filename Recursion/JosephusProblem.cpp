// Program to solve Josephus Problem {GFG - Recursion} (Good Question)

#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
        return 0;

    return (jos(n - 1, k) + k) % n; /* % n is done so that position of final survivor is not more than
                                    total number of people AND + k is done because every time kth person is killed,
                                    the starting position gets shifted by k positions */
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << jos(n, k);
    return 0;
}