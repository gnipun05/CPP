// Program to count maximum number of consecutive 1's

#include <bits/stdc++.h>
using namespace std;

int max1s(int *arr, int n)
{
    int freq=0,res=0;
    for(int i=1; i<n; i++)
        if(arr[i]==1)
            if(arr[i-1]==1)
                {
                    freq++;
                    res=max(res,freq);
                }
        else  
            freq=0;

    return res+1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout << max1s(arr,n);

    return 0;
}