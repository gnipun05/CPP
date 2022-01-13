/* Given a mxn matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> m >> n;
    int target; cin >> target;

    int arr[m][n];
    for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
    cin >> arr[i][j];

    int r=0, c=n-1; // this is representing top-right-most corner of the Matrix at this moment
    bool found = false;
    while (r<n && c>=0)
    {
        if(arr[r][c]==target)
        {found = true; break;}

        if(arr[r][c]>=target)
        c--;
        else
        r++;
    }

    cout << found;

    return 0;
}