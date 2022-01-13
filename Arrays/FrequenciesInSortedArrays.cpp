// Frequencies of all the elements present in the sorted array

#include <bits/stdc++.h>
using namespace std;

void shift(int *arr, int n)
{
    int freq=1;
    for(int i=1; i<n; i++)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout << arr[i-1]<< " " << freq << endl;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
        cout<<arr[n-1]<<" "<<1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    shift(arr,n);

    return 0;
}