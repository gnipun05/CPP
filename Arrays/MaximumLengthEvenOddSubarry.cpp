// Program to calculate the Maximum lenght of Subarray containing alternate Even and Odd Elements

#include <bits/stdc++.h>
using namespace std;

int maxlen(int *arr, int n)
{
    int res=1,count=1;
    for(int i=1; i<n; i++)
    {
        if((arr[i-1]%2==1 && arr[i]%2==0)||(arr[i-1]%2==0 && arr[i]%2==1))
        {
            count++;
            res=max(res,count);
        }
        else
            count=1;
    }

    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout << maxlen(arr,n);

    return 0;
}