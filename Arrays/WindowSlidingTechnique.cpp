// Program to find the maximum sum for a Window of given length k, using Window Sliding Technique

#include <bits/stdc++.h>
using namespace std;

int calcsum(int *arr, int n, int k)
{
    int sum=0;
    for(int i=0; i<k; i++)
        sum+=arr[i];
    int maxsum=sum;

    for(int i=k; i<n; i++)
    {
        sum=sum+arr[i]-arr[i-k];
        maxsum=max(sum,maxsum);
    }

    return maxsum;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout << calcsum(arr,n,k);

    return 0;
}