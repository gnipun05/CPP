/* Find the longest sunbsequence of an Array consisting of consecutive elements (Naive Method) */

#include <bits/stdc++.h>
using namespace std;

int consecSequence (int arr[], int n)
{
    int res=1, count  =1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            count ++;
        }
        else if(arr[i]!=arr[i-1]) // if(arr[i]==arr[i-1]) we simply ignore it look if next numbers are consecutive or not. E.g.: for 2,3,3,4 answer will be 3 which counts 2 3 and 4
        {
            count =1;
            res=max(res,count);
        }
    }
    return res;
}

int main()
{
    int arr[]={2,9,4,3,10,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len); // Sorts in increasing / ascending order

    cout << consecSequence(arr,len);
    return 0;
}