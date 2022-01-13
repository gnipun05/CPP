/* Fedor and New Game :- https://codeforces.com/problemset/problem/467/B */

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int table[256];
    table[0]=0;
    for(int i=1; i<256; i++)
        table[i]= (i&1) + table[i/2];

    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0; i<m+1; i++)
        cin>>arr[i];

    int res=0;
    for(int i=0; i<m; i++)
    {
        int check=(arr[m]^arr[i]);
        int temp=0;
        for(int j=0; j<n; j=j+8)
        {
            temp+=table[check & 0xff];
            check=check>>8;
        }
        if(temp<=k)
            res++;
    }

    cout << res;
    return 0;
}