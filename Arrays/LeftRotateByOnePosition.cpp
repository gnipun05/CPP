// Program to left rotate an array by one

#include <bits/stdc++.h>
using namespace std;

void leftRotate(int *arr, int n)
{
    int temp=arr[0];
    for(int i=0; i<n-1; i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    leftRotate(arr,n);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}