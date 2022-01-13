#include <bits/stdc++.h>
using namespace std;

int main() // from pepcoding
{
    int r, c;
    cin >> r >> c;

    int arr[r][c];
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin >> arr[i][j];

    int minr= 0;
    int maxr= r-1;
    int minc= 0;
    int maxc= c-1;

    int count= 0;
    int total= r*c;

    while (total>count)
    {
        // left wall
        for(int i=minr, j=minc; i<=maxr; i++)
        {
            cout << arr[i][j] << endl;
            count ++;
        }
        minc++;

        // bottom wall
        for(int i=maxr, j=minc; j<=maxc; j++)
        {
            cout << arr[i][j] << endl;
            count ++;
        }
        maxr--;

        // right wall
        for(int i=maxr, j=maxc; i>=minr; i--)
        {
            cout << arr[i][j] << endl;
            count ++;
        }
        maxc--;

        // top wall
        for(int i=minr, j=maxc; j>=minc; j--)
        {
            cout << arr[i][j] << endl;
            count ++;
        }
        minr++;
    }
    return 0;
}