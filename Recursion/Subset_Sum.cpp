// Program to find number of subsets of an array having same sum as the given sum

#include <bits/stdc++.h>
using namespace std;

int subsetsum(int *arr, int currsum, int i)
{
    if(i==0)
        return currsum?0:1; // if currsum is equal to 0, then 1 will be returned
    
    return subsetsum(arr,currsum,i-1)+subsetsum(arr,currsum-arr[i-1],i-1);
}

int main()
{
    int sum,n;
    cin>>sum>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<subsetsum(arr,sum,n);
    return 0;
}