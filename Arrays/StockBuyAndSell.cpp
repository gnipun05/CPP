// Program to Buy and Sell Stocks any number of times to obtain maximum profit

#include <bits/stdc++.h>
using namespace std;

void stocks(int *arr, int n)
{
    int profit=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>=arr[i-1])
            profit+=arr[i]-arr[i-1];
    }
    cout<<profit;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    stocks(arr,n);

    return 0;
}