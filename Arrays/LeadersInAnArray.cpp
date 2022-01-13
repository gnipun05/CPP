/* Program to print all the Leaders of an Array {If all the numbers
 on the right to a number are smaller than it, than it is called a Leader} [Last number is always a leader] */

#include <bits/stdc++.h>
using namespace std;

void leaders(int *arr, int n)
{
    int currldr=arr[n-1];
    cout<<currldr<<" ";
    for(int i=n-2; i>=0; i--)
        if(currldr<arr[i])
        {
            currldr=arr[i];
            cout<<currldr<<" ";
        }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    leaders(arr,n);

    return 0;
}