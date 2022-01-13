// Program to print Mth N-Bonacci Numbers {Written by Myself}. Time Complexity is O(m*n)

#include <bits/stdc++.h>
using namespace std;

void printNBonacci(int n, int m)
{
    if(m<n)
    {
        cout << 0;
        return;
    }

    int arr[m]={0};
    arr[n-1]=1;

    int i;
    for(i=n; i<m; i++)
        for(int j=0; j<n; j++)
            arr[i]+=arr[i-n+j];
    
    cout<<arr[i-1]<<" ";
}

int main()
{
    int n,m;
    cin>>n>>m;

    printNBonacci(n,m);

    return 0;
}